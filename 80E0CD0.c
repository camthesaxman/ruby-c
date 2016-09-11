int __fastcall sub_80E0CD0(unsigned __int8 a1)
{
  unsigned __int8 v1; // r7@1
  int *v2; // r4@1
  __int16 v3; // r0@1
  __int16 v4; // r3@1
  __int16 v5; // r0@2
  int v6; // r1@5
  char *v7; // r2@8
  int v9; // [sp+0h] [bp-24h]@7
  int v10; // [sp+4h] [bp-20h]@7
  int v11; // [sp+Ch] [bp-18h]@7
  int v12; // [sp+20h] [bp-4h]@10

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 14) + 4;
  *((_WORD *)v2 + 14) = v3;
  v4 = word_30042C0;
  word_30042C0 -= 4;
  if ( v3 == 128 )
  {
    *((_WORD *)v2 + 14) = 0;
    word_30042C0 = v4 + 124;
    v5 = *((_WORD *)v2 + 15) + 1;
    *((_WORD *)v2 + 15) = v5;
    if ( v5 == 2 )
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
      v6 = ((unsigned int)(unsigned __int8)gSprites[68 * (unsigned __int8)obj_id_for_side_relative_to_move(0) + 5] >> 4)
         + 16;
      if ( !*((_WORD *)v2 + 5) )
        sub_8079108(v6, 1);
      DestroySprite((int)&gSprites[68 * *((_WORD *)v2 + 4)]);
      sub_8078914((int)&v9);
      v11 = 0;
      v40000D4 = &v11;
      v40000D8 = v10;
      v40000DC = -2063597056;
      if ( *((_WORD *)v2 + 10) == 1 )
      {
        v7 = &gSprites[68 * *(_BYTE *)((v202F7C8 ^ 2) + 0x2024BE0)];
        v7[5] = v7[5] & 0xF3 | 4 * ((((unsigned int)(unsigned __int8)v7[5] << 28 >> 30) + 1) & 3);
      }
      move_anim_task_del(v1);
    }
  }
  return v12;
}
