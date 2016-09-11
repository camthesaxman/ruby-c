int __fastcall sub_80E3E64(unsigned __int8 a1)
{
  unsigned __int8 v1; // r6@1
  int *v2; // r3@1
  int v3; // r2@1
  int v4; // r4@3
  int *v5; // r4@6
  signed int v6; // r0@6
  __int16 v7; // r0@12
  __int16 v8; // r1@13
  __int16 v9; // r0@15
  __int16 v10; // r0@17
  __int16 v11; // r1@18
  int v13; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 5);
  if ( v3 < 0 )
    v3 = -v3;
  v4 = *((_WORD *)v2 + 17) + v3;
  *((_WORD *)v2 + 17) = v4;
  if ( (signed int)*((_WORD *)v2 + 5) >= 0 )
    word_30041B4 += v4 << 16 >> 24;
  else
    word_30041B4 -= v4 << 16 >> 24;
  v5 = &dword_3004B20[10 * a1];
  *((_WORD *)v5 + 17) &= 0xFFu;
  v6 = *((_WORD *)v5 + 19);
  if ( v6 == 1 )
  {
    v9 = *((_WORD *)v5 + 14) + 1;
    *((_WORD *)v5 + 14) = v9;
    if ( v9 == *((_WORD *)v5 + 9) )
    {
_080E3F2A:
      ++*((_WORD *)v5 + 19);
      return v13;
    }
  }
  else if ( v6 > 1 )
  {
    if ( v6 == 2 )
    {
      v10 = *((_WORD *)v5 + 15);
      *((_WORD *)v5 + 15) = v10 + 1;
      if ( v10 >= (signed int)*((_WORD *)v5 + 10) )
      {
        *((_WORD *)v5 + 15) = 0;
        v11 = *((_WORD *)v5 + 16) - 1;
        *((_WORD *)v5 + 16) = v11;
        v4000052 = v11 | ((16 - v11) << 8);
        if ( !*((_WORD *)v5 + 16) )
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
          DestroySprite((int)&gSprites[68 * *((_WORD *)v5 + 4)]);
          if ( *((_WORD *)v5 + 6) )
            DestroySprite((int)&gSprites[68 * *((_WORD *)v5 + 7)]);
          v400000B &= 0xDFu;
          move_anim_task_del(v1);
        }
      }
    }
  }
  else if ( !*((_WORD *)v5 + 19) )
  {
    v7 = *((_WORD *)v5 + 15);
    *((_WORD *)v5 + 15) = v7 + 1;
    if ( v7 >= (signed int)*((_WORD *)v5 + 10) )
    {
      *((_WORD *)v5 + 15) = 0;
      v8 = *((_WORD *)v5 + 16) + 1;
      *((_WORD *)v5 + 16) = v8;
      v4000052 = v8 | ((16 - v8) << 8);
      if ( *((_WORD *)v5 + 16) == *((_WORD *)v5 + 8) )
        goto _080E3F2A;
    }
  }
  return v13;
}
