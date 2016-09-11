int __fastcall sub_80D3B60(unsigned __int8 a1)
{
  int v1; // r7@1
  int *v2; // r4@1
  __int16 v3; // r0@1
  __int16 v4; // r6@2
  int v5; // r2@2
  int *v6; // r3@5
  __int16 v7; // r0@5
  __int16 v8; // r2@6
  __int16 v9; // r2@9
  int v10; // r2@11
  unsigned int v11; // r3@11
  int v13; // [sp+4h] [bp-34h]@1
  int v14; // [sp+8h] [bp-30h]@13
  unsigned __int8 v15; // [sp+Ch] [bp-2Ch]@2
  int v16; // [sp+10h] [bp-28h]@12
  int v17; // [sp+14h] [bp-24h]@5
  int v18; // [sp+34h] [bp-4h]@16

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  word_30042C0 += *((_WORD *)v2 + 4);
  word_30041B4 += *((_WORD *)v2 + 5);
  sub_8078914((int)&v13);
  *((_WORD *)v2 + 6) += *((_WORD *)v2 + 5);
  v3 = *((_WORD *)v2 + 9) + 1;
  *((_WORD *)v2 + 9) = v3;
  if ( v3 == 4 )
  {
    v4 = *(_WORD *)(2 * (16 * v15 + 7) + 0x202EEC8);
    v5 = 6;
    do
    {
      *(_WORD *)(2 * (16 * v15 + v5 + 1) + 0x202EEC8) = *(_WORD *)(2 * (16 * v15 + v5 + 1 - 1) + 0x202EEC8);
      v5 = (v5 - 1) & 0xFF;
    }
    while ( v5 );
    *(_WORD *)(2 * (16 * v15 + 1) + 0x202EEC8) = v4;
    HIWORD(dword_3004B20[10 * v1 + 4]) = 0;
  }
  v6 = &dword_3004B20[10 * v1];
  v7 = *((_WORD *)v6 + 10) + 1;
  *((_WORD *)v6 + 10) = v7;
  v17 = 4 * v1;
  if ( v7 > 1 )
  {
    *((_WORD *)v6 + 10) = 0;
    v8 = *((_WORD *)v6 + 7) + 1;
    *((_WORD *)v6 + 7) = v8;
    if ( v8 <= 13 )
    {
      HIWORD(dword_3004B20[10 * HIWORD(dword_3004B20[10 * v1 + 9]) + 2]) = v8 | ((16 - v8) << 8);
      ++*((_WORD *)v6 + 8);
    }
    if ( (signed int)*((_WORD *)v6 + 7) > 54 )
    {
      v9 = *((_WORD *)v6 + 8) - 1;
      *((_WORD *)v6 + 8) = v9;
      HIWORD(dword_3004B20[10 * HIWORD(dword_3004B20[10 * v1 + 9]) + 2]) = v9 | ((16 - v9) << 8);
    }
  }
  if ( !(HIWORD(dword_3004B20[10 * HIWORD(dword_3004B20[2 * (v17 + v1) + 9]) + 2]) & 0x1F) )
  {
    v10 = v13;
    v11 = 0x2000;
    do
    {
      v16 = 0;
      v40000D4 = &v16;
      v40000D8 = v10;
      v40000DC = -2063596544;
      v10 += 4096;
      v11 -= 4096;
    }
    while ( v11 > 0x1000 );
    v16 = 0;
    v40000D4 = &v16;
    v40000D8 = v14;
    v40000DC = -2063596544;
    if ( !(sub_8076BE0() << 24) )
      v400000A &= 0xF3u;
    word_30042C0 = 0;
    word_30041B4 = 0;
    v4000050 = 0;
    v4000052 = 0;
    HIWORD(dword_3004B20[10 * HIWORD(dword_3004B20[2 * (v17 + v1) + 9]) + 9]) = -1;
    move_anim_task_del(v1);
  }
  return v18;
}
