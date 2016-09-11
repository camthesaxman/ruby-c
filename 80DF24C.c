int __fastcall sub_80DF24C(unsigned __int8 a1)
{
  __int16 v1; // r7@1
  int *v2; // r4@1
  unsigned int v3; // r0@1
  unsigned int v4; // r6@3
  int v5; // r3@4
  int v6; // r2@4
  char *v7; // r5@5
  int v8; // r0@5
  signed __int16 v9; // r1@5
  __int16 v10; // r0@10
  __int16 v11; // r3@15
  int v12; // r2@15
  __int16 v13; // r0@18
  __int16 v14; // r0@20
  int v16; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( v3 <= 5 )
  {
    switch ( v3 )
    {
      case 0u:
        v4 = 0;
        do
        {
          v5 = *((_BYTE *)v2 + 20);
          v6 = (unsigned __int8)CreateSprite((int)"\r(\r(”à7\b|¯=\b", *((_WORD *)v2 + 13), *((_WORD *)v2 + 14));
          if ( v6 != 64 )
          {
            v7 = &gSprites[68 * v6];
            *((_WORD *)v7 + 23) = v1;
            v8 = battle_side_get_owner(v202F7C8);
            v9 = 0;
            if ( !(v8 << 24) )
              v9 = 1;
            *((_WORD *)v7 + 24) = v9;
            *((_WORD *)v7 + 25) = 42 * v4 & 0xFF;
            *((_WORD *)v7 + 26) = *((_WORD *)v2 + 15);
            *((_WORD *)v7 + 28) = 6 * v4;
            ++*((_WORD *)v2 + 11);
          }
          v4 = (v4 + 1) & 0xFFFF;
        }
        while ( v4 <= 5 );
        goto _080DF3B4;
      case 1u:
        v10 = *((_WORD *)v2 + 5) + 1;
        *((_WORD *)v2 + 5) = v10;
        if ( v10 & 1 )
        {
          if ( (signed int)*((_WORD *)v2 + 7) <= 13 )
            ++*((_WORD *)v2 + 7);
        }
        else if ( (signed int)*((_WORD *)v2 + 8) > 4 )
        {
          --*((_WORD *)v2 + 8);
        }
        v11 = *((_WORD *)v2 + 7);
        v12 = *((_WORD *)v2 + 8);
        if ( *((_WORD *)v2 + 7) != 14 || v12 != 4 )
          goto _080DF39C;
        *((_WORD *)v2 + 5) = 0;
        goto _080DF396;
      case 2u:
        v13 = *((_WORD *)v2 + 5) + 1;
        *((_WORD *)v2 + 5) = v13;
        if ( v13 <= 30 )
          return v16;
        *((_WORD *)v2 + 5) = 0;
        goto _080DF3B4;
      case 3u:
        v14 = *((_WORD *)v2 + 5) + 1;
        *((_WORD *)v2 + 5) = v14;
        if ( v14 & 1 )
        {
          if ( (signed int)*((_WORD *)v2 + 7) > 0 )
            --*((_WORD *)v2 + 7);
        }
        else if ( (signed int)*((_WORD *)v2 + 8) <= 15 )
        {
          ++*((_WORD *)v2 + 8);
        }
        v11 = *((_WORD *)v2 + 7);
        v12 = *((_WORD *)v2 + 8);
        if ( !*((_WORD *)v2 + 7) && v12 == 16 )
        {
          *((_WORD *)v2 + 12) = 1;
_080DF396:
          ++*((_WORD *)v2 + 4);
        }
_080DF39C:
        v4000052 = ((_WORD)v12 << 8) | v11;
        break;
      case 4u:
        if ( !*((_WORD *)v2 + 11) )
_080DF3B4:
          ++*((_WORD *)v2 + 4);
        break;
      case 5u:
        v4000050 = 0;
        v4000052 = 0;
        move_anim_task_del(v1);
        break;
      default:
        return v16;
    }
  }
  return v16;
}
