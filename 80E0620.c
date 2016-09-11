int __fastcall sub_80E0620(unsigned __int8 a1)
{
  unsigned __int8 v1; // r2@1
  int *v2; // r4@1
  unsigned int v3; // r0@1
  __int16 v4; // r0@3
  __int16 v5; // r0@10
  __int16 v6; // r0@15
  __int16 v7; // r0@16
  int v9; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( v3 <= 4 )
  {
    switch ( v3 )
    {
      case 0u:
        v4 = *((_WORD *)v2 + 9) + 8;
        *((_WORD *)v2 + 9) = v4;
        if ( v4 >= (signed int)*((_WORD *)v2 + 11) )
          *((_WORD *)v2 + 9) = *((_WORD *)v2 + 11);
        sub_80E079C(v2);
        if ( *((_WORD *)v2 + 9) == *((_WORD *)v2 + 11) )
          goto _080E075A;
        break;
      case 1u:
        if ( *((_WORD *)v2 + 19) - (signed int)*((_WORD *)v2 + 18) > 63 )
        {
          *((_WORD *)v2 + 5) = 1;
        }
        else
        {
          *((_WORD *)v2 + 18) -= 4;
          *((_WORD *)v2 + 19) += 4;
        }
        word_30042C4 = (*((_WORD *)v2 + 18) << 8) | *((_WORD *)v2 + 19);
        v5 = *((_WORD *)v2 + 8) + 8;
        *((_WORD *)v2 + 8) = v5;
        if ( v5 >= (signed int)*((_WORD *)v2 + 10) )
          *((_WORD *)v2 + 8) = *((_WORD *)v2 + 10);
        sub_80E079C(v2);
        if ( *((_WORD *)v2 + 8) == *((_WORD *)v2 + 10) && *((_WORD *)v2 + 5) )
        {
          *((_WORD *)v2 + 5) = 0;
          goto _080E075A;
        }
        break;
      case 2u:
        v6 = *((_WORD *)v2 + 5) + 1;
        *((_WORD *)v2 + 5) = v6;
        if ( v6 > 1 )
        {
          *((_WORD *)v2 + 5) = 0;
          v7 = *((_WORD *)v2 + 6) + 1;
          *((_WORD *)v2 + 6) = v7;
          if ( v7 & 1 )
          {
            if ( *((_WORD *)v2 + 15) )
              --*((_WORD *)v2 + 15);
          }
          else if ( (signed int)*((_WORD *)v2 + 16) <= 15 )
          {
            ++*((_WORD *)v2 + 16);
          }
          v4000052 = (*((_WORD *)v2 + 16) << 8) | *((_WORD *)v2 + 15);
          if ( !*((_WORD *)v2 + 15) && *((_WORD *)v2 + 16) == 16 )
            goto _080E075A;
        }
        break;
      case 3u:
        byte_3004DD5 = 3;
_080E075A:
        ++*((_WORD *)v2 + 4);
        break;
      case 4u:
        word_30042C4 = 0;
        word_3004240 = 0;
        v4000048 = 16191;
        v400004A = 16191;
        move_anim_task_del(v1);
        break;
      default:
        return v9;
    }
  }
  return v9;
}
