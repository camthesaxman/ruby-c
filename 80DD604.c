int __fastcall sub_80DD604(unsigned __int8 a1)
{
  unsigned __int8 v1; // r2@1
  int *v2; // r4@1
  unsigned int v3; // r0@1
  int v4; // r2@3
  __int16 v5; // r0@3
  int v6; // r0@6
  __int16 v7; // r0@7
  __int16 v8; // r0@11
  __int16 v9; // r1@12
  int v11; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( v3 <= 4 )
  {
    switch ( v3 )
    {
      case 0u:
        v4 = *((_WORD *)v2 + 10) - *((_WORD *)v2 + 8);
        *((_WORD *)v2 + 10) = v4;
        *((_WORD *)v2 + 11) -= *((_WORD *)v2 + 9);
        *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 19) + 36] = v4 << 16 >> 19;
        *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 19) + 38] = *((_WORD *)v2 + 11) << 16 >> 19;
        v5 = *((_WORD *)v2 + 13) + 1;
        *((_WORD *)v2 + 13) = v5;
        if ( v5 == 10 )
        {
          *((_WORD *)v2 + 15) = 20;
          ++*((_WORD *)v2 + 4);
        }
        audio_play_and_stuff(0xA2u, *((_WORD *)v2 + 17));
        break;
      case 1u:
        v6 = *((_WORD *)v2 + 15) - 1;
        *((_WORD *)v2 + 15) = v6;
        goto _080DD750;
      case 2u:
        v7 = *((_WORD *)v2 + 13) - 1;
        *((_WORD *)v2 + 13) = v7;
        if ( v7 )
        {
          *((_WORD *)v2 + 10) += *((_WORD *)v2 + 8);
          *((_WORD *)v2 + 11) += *((_WORD *)v2 + 9);
        }
        else
        {
          *((_WORD *)v2 + 10) = 0;
          *((_WORD *)v2 + 11) = 0;
          ++*((_WORD *)v2 + 4);
        }
        *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 19) + 36] = *((_WORD *)v2 + 10) << 16 >> 19;
        *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 19) + 38] = *((_WORD *)v2 + 11) << 16 >> 19;
        break;
      case 3u:
        *((_WORD *)v2 + 6) += *((_WORD *)v2 + 8);
        *((_WORD *)v2 + 7) += *((_WORD *)v2 + 9);
        v8 = *((_WORD *)v2 + 13) + 1;
        *((_WORD *)v2 + 13) = v8;
        if ( v8 >= (signed int)*((_WORD *)v2 + 14) )
        {
          *((_WORD *)v2 + 13) = 0;
          sub_80DD774(v2);
          v9 = *((_WORD *)v2 + 18) + *((_WORD *)v2 + 17);
          *((_WORD *)v2 + 17) = v9;
          audio_play_and_stuff(0xAFu, v9);
        }
        v6 = *((_WORD *)v2 + 12) - 1;
        *((_WORD *)v2 + 12) = v6;
_080DD750:
        if ( !(v6 << 16) )
          ++*((_WORD *)v2 + 4);
        break;
      case 4u:
        if ( !*((_WORD *)v2 + 15) )
          move_anim_task_del(v1);
        break;
      default:
        return v11;
    }
  }
  return v11;
}
