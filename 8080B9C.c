int __fastcall sub_8080B9C(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int *v2; // r5@1
  _WORD *v3; // r6@1
  int *v4; // r7@1
  unsigned int v5; // r0@1
  unsigned __int8 v6; // r0@5
  unsigned __int8 v7; // r0@7
  int v8; // r0@8
  int v10; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = v2 + 3;
  v4 = (int *)((char *)v2 + 14);
  v5 = *((_WORD *)v2 + 4);
  if ( v5 <= 4 )
  {
    switch ( v5 )
    {
      case 0u:
        sub_8080958(0);
        player_bitmagic();
        PlayerGetDestCoords(v3, v4);
        sub_80586B4(*v3, *(_WORD *)v4);
        *((_WORD *)v2 + 4) = 1;
        break;
      case 1u:
        if ( sub_8080E70() )
        {
          sub_8080958(1);
          v6 = GetFieldObjectIdByLocalIdAndMap(0xFFu);
          FieldObjectSetSpecialAnim(&dword_30048A0[9 * v6], 8);
          *((_WORD *)v2 + 4) = 2;
        }
        break;
      case 2u:
        if ( walkrun_is_standing_still() << 24 )
        {
          *((_WORD *)v2 + 5) = (char)sub_805870C(*v3, *(_WORD *)v4);
          v7 = GetFieldObjectIdByLocalIdAndMap(0xFFu);
          FieldObjectClearAnimIfSpecialAnimFinished(&dword_30048A0[9 * v7]);
          *((_WORD *)v2 + 4) = 3;
        }
        break;
      case 3u:
        v8 = *((_WORD *)v2 + 5);
        if ( v8 < 0 || LOBYTE(dword_3004B20[10 * v8 + 1]) != 1 )
        {
          sub_806451C();
          *((_WORD *)v2 + 4) = 4;
        }
        break;
      case 4u:
        script_env_2_disable();
        DestroyTask(v1);
        break;
      default:
        return v10;
    }
  }
  return v10;
}
