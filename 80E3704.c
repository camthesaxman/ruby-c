int __fastcall sub_80E3704(unsigned __int8 a1)
{
  unsigned __int8 v1; // r6@1
  int *v2; // r4@1
  signed int v3; // r2@1
  int v4; // r0@7
  __int16 v5; // r1@8
  __int16 v6; // r0@10
  int v7; // r0@12
  __int16 v8; // r1@13
  char *v9; // r2@19
  int v11; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  word_30041B4 += *((_WORD *)v2 + 5);
  v3 = *((_WORD *)v2 + 19);
  if ( v3 == 1 )
  {
    v6 = *((_WORD *)v2 + 14) + 1;
    *((_WORD *)v2 + 14) = v6;
    if ( v6 == *((_WORD *)v2 + 9) )
    {
_080E3786:
      ++*((_WORD *)v2 + 19);
      return v11;
    }
  }
  else if ( v3 > 1 )
  {
    if ( v3 == 2 )
    {
      v7 = *((_WORD *)v2 + 15);
      *((_WORD *)v2 + 15) = v7 + 1;
      if ( v7 << 16 > 0 )
      {
        *((_WORD *)v2 + 15) = 0;
        v8 = *((_WORD *)v2 + 16) - 1;
        *((_WORD *)v2 + 16) = v8;
        v4000052 = v8 | ((16 - v8) << 8);
        if ( !*((_WORD *)v2 + 16) )
        {
          sub_8076464(0);
          word_30042C4 = 0;
          word_3004240 = 0;
          v4000048 = 16191;
          v400004A = 16191;
          if ( !(sub_8076BE0() << 24) )
            v400000A &= 0xF3u;
          v4000000 ^= 0x8000u;
          v4000050 = 0;
          v4000052 = 0;
          DestroySprite((int)&gSprites[68 * *((_WORD *)v2 + 4)]);
          if ( *((_WORD *)v2 + 6) )
            DestroySprite((int)&gSprites[68 * *((_WORD *)v2 + 7)]);
          if ( *((_WORD *)v2 + 10) == 1 )
          {
            v9 = &gSprites[68 * *((_WORD *)v2 + 11)];
            v9[5] = v9[5] & 0xF3 | 4 * ((((unsigned int)(unsigned __int8)v9[5] << 28 >> 30) + 1) & 3);
          }
          v400000B &= 0xDFu;
          move_anim_task_del(v1);
        }
      }
    }
  }
  else if ( !*((_WORD *)v2 + 19) )
  {
    v4 = *((_WORD *)v2 + 15);
    *((_WORD *)v2 + 15) = v4 + 1;
    if ( v4 << 16 > 0 )
    {
      *((_WORD *)v2 + 15) = 0;
      v5 = *((_WORD *)v2 + 16) + 1;
      *((_WORD *)v2 + 16) = v5;
      v4000052 = v5 | ((16 - v5) << 8);
      if ( *((_WORD *)v2 + 16) == *((_WORD *)v2 + 8) )
        goto _080E3786;
    }
  }
  return v11;
}
