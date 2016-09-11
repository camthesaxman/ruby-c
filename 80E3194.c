int __fastcall sub_80E3194(unsigned __int8 a1)
{
  unsigned __int8 v1; // r6@1
  int *v2; // r4@1
  __int16 v3; // r0@1
  __int16 v4; // r2@1
  __int16 v5; // r0@2
  char *v6; // r2@6
  int v8; // [sp+0h] [bp-28h]@5
  int v9; // [sp+4h] [bp-24h]@5
  int v10; // [sp+Ch] [bp-1Ch]@5
  int v11; // [sp+24h] [bp-4h]@8

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 14) + 4;
  *((_WORD *)v2 + 14) = v3;
  v4 = word_30041B4;
  word_30041B4 -= 4;
  if ( v3 == 64 )
  {
    *((_WORD *)v2 + 14) = 0;
    word_30041B4 = v4 + 60;
    v5 = *((_WORD *)v2 + 15) + 1;
    *((_WORD *)v2 + 15) = v5;
    if ( v5 == 4 )
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
      obj_id_for_side_relative_to_move(0);
      DestroySprite((int)&gSprites[68 * *((_WORD *)v2 + 4)]);
      sub_8078914((int)&v8);
      v10 = 0;
      v40000D4 = &v10;
      v40000D8 = v9;
      v40000DC = -2063597056;
      if ( *((_WORD *)v2 + 10) == 1 )
      {
        v6 = &gSprites[68 * *(_BYTE *)((v202F7C8 ^ 2) + 0x2024BE0)];
        v6[5] = v6[5] & 0xF3 | 4 * ((((unsigned int)(unsigned __int8)v6[5] << 28 >> 30) + 1) & 3);
      }
      v400000B &= 0xDFu;
      word_30041B4 = 0;
      move_anim_task_del(v1);
    }
  }
  return v11;
}
