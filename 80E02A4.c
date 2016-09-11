int __fastcall sub_80E02A4(unsigned __int8 a1)
{
  unsigned __int8 v1; // r2@1
  int *v2; // r4@1
  unsigned int v3; // r0@1
  __int16 v4; // r0@3
  __int16 v5; // r0@4
  int v6; // r1@14
  int v7; // r2@14
  int v8; // r2@16
  int v9; // r1@16
  int v11; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( v3 <= 4 )
  {
    switch ( v3 )
    {
      case 0u:
        v4 = *((_WORD *)v2 + 5) + 1;
        *((_WORD *)v2 + 5) = v4;
        if ( v4 > 1 )
        {
          *((_WORD *)v2 + 5) = 0;
          v5 = *((_WORD *)v2 + 6) + 1;
          *((_WORD *)v2 + 6) = v5;
          if ( v5 & 1 )
          {
            if ( *((_WORD *)v2 + 15) != 12 )
              ++*((_WORD *)v2 + 15);
          }
          else if ( *((_WORD *)v2 + 16) != 8 )
          {
            --*((_WORD *)v2 + 16);
          }
          v4000052 = (*((_WORD *)v2 + 16) << 8) | *((_WORD *)v2 + 15);
          if ( *((_WORD *)v2 + 15) == 12 && *((_WORD *)v2 + 16) == 8 )
            goto _080E03A2;
        }
        break;
      case 1u:
        *((_WORD *)v2 + 8) -= 8;
        sub_80E079C(v2);
        if ( *((_WORD *)v2 + 8) < (signed int)*((_WORD *)v2 + 12) )
          goto _080E03A2;
        break;
      case 2u:
        *((_WORD *)v2 + 8) -= 8;
        sub_80E079C(v2);
        v6 = *((_WORD *)v2 + 18) + 4;
        *((_WORD *)v2 + 18) = v6;
        v7 = *((_WORD *)v2 + 19) - 4;
        *((_WORD *)v2 + 19) = v7;
        if ( v6 << 16 >= v7 << 16 )
          *((_WORD *)v2 + 18) = v7;
        v8 = *((_WORD *)v2 + 18);
        v9 = *((_WORD *)v2 + 19);
        word_30042C4 = ((_WORD)v8 << 8) | v9;
        if ( v8 << 16 == v9 << 16 )
          goto _080E03A2;
        break;
      case 3u:
        byte_3004DD5 = 3;
_080E03A2:
        ++*((_WORD *)v2 + 4);
        break;
      case 4u:
        move_anim_task_del(v1);
        break;
      default:
        return v11;
    }
  }
  return v11;
}
