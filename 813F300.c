int __fastcall sub_813F300(unsigned __int8 a1)
{
  unsigned __int8 v1; // r7@1
  int v2; // r9@1
  int *v3; // r4@1
  int v4; // r1@1
  signed int v5; // r0@1
  __int16 v6; // r0@7
  __int16 v7; // r1@8
  __int16 v8; // r0@10
  __int16 v9; // r0@12
  __int16 v10; // r1@13
  int v11; // r5@13
  char *v12; // r1@16
  int v13; // r6@16
  int v14; // r4@16
  int v16; // [sp+0h] [bp-2Ch]@16
  int v17; // [sp+4h] [bp-28h]@16
  int v18; // [sp+Ch] [bp-20h]@16
  int v19; // [sp+28h] [bp-4h]@17

  v1 = a1;
  v2 = v202F7C8;
  v3 = &dword_3004B20[10 * a1];
  v4 = *((_WORD *)v3 + 5) + *((_WORD *)v3 + 17);
  *((_WORD *)v3 + 17) = v4;
  word_30041B4 += (unsigned int)(v4 << 16) >> 24;
  *((_WORD *)v3 + 17) = (unsigned __int8)v4;
  v5 = *((_WORD *)v3 + 19);
  if ( v5 == 1 )
  {
    v8 = *((_WORD *)v3 + 14) + 1;
    *((_WORD *)v3 + 14) = v8;
    if ( v8 == 30 )
    {
_0813F3A4:
      ++*((_WORD *)v3 + 19);
      return v19;
    }
  }
  else if ( v5 > 1 )
  {
    if ( v5 == 2 )
    {
      v9 = *((_WORD *)v3 + 15);
      *((_WORD *)v3 + 15) = v9 + 1;
      if ( v9 > 1 )
      {
        *((_WORD *)v3 + 15) = 0;
        v10 = *((_WORD *)v3 + 16) - 1;
        *((_WORD *)v3 + 16) = v10;
        v4000052 = v10 | ((16 - v10) << 8);
        v11 = *((_WORD *)v3 + 16);
        if ( !*((_WORD *)v3 + 16) )
        {
          sub_8076464(0);
          word_30042C4 = v11;
          word_3004240 = v11;
          v4000048 = 16191;
          v400004A = 16191;
          if ( !(sub_8076BE0() << 24) )
            v400000A &= 0xF3u;
          v4000000 ^= 0x8000u;
          v4000050 = v11;
          v4000052 = v11;
          DestroySprite((int)&gSprites[68 * *((_WORD *)v3 + 4)]);
          DestroySprite((int)&gSprites[68 * *((_WORD *)v3 + 6)]);
          sub_8078914((int)&v16);
          v18 = v11;
          v40000D4 = &v18;
          v40000D8 = v17;
          v40000DC = -2063597056;
          v400000B &= 0xDFu;
          v12 = &gSprites[68 * (unsigned __int8)byte_3004340[v2]];
          v13 = (unsigned __int8)v12[6];
          v14 = *((_WORD *)v12 + 28) & 0xFF;
          v12[5] = v12[5] & 0xF3 | 4;
          gSprites[68 * v13 + 5] = gSprites[68 * v13 + 5] & 0xF3 | 4;
          gSprites[68 * v14 + 5] = gSprites[68 * v14 + 5] & 0xF3 | 4;
          move_anim_task_del(v1);
        }
      }
    }
  }
  else if ( !*((_WORD *)v3 + 19) )
  {
    v6 = *((_WORD *)v3 + 15);
    *((_WORD *)v3 + 15) = v6 + 1;
    if ( v6 > 1 )
    {
      *((_WORD *)v3 + 15) = 0;
      v7 = *((_WORD *)v3 + 16) + 1;
      *((_WORD *)v3 + 16) = v7;
      v4000052 = v7 | ((16 - v7) << 8);
      if ( *((_WORD *)v3 + 16) == 8 )
        goto _0813F3A4;
    }
  }
  return v19;
}
