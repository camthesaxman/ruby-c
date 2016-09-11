int __fastcall sub_8076464(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v3; // r2@3
  unsigned int v4; // r3@3
  int *v5; // r5@3
  __int16 *v6; // r9@3
  __int16 *v7; // r10@3
  signed int v8; // r1@5
  signed int v9; // r2@6
  unsigned int v10; // r3@6
  int v12; // [sp+4h] [bp-30h]@1
  int v13; // [sp+8h] [bp-2Ch]@5
  int v14; // [sp+10h] [bp-24h]@3
  int v15; // [sp+30h] [bp-4h]@9

  v1 = a1;
  v2 = sub_8078914(&v12);
  if ( v1 && !(sub_8076BE0(v2) << 24) )
  {
    v9 = 100687872;
    v10 = 0x2000;
    v5 = &v14;
    v6 = &word_3004288;
    v7 = &word_3004280;
    do
    {
      v14 = 0;
      v40000D4 = &v14;
      v40000D8 = v9;
      v40000DC = -2063596544;
      v9 += 4096;
      v10 -= 4096;
    }
    while ( v10 > 0x1000 );
    v14 = 0;
    v40000D4 = &v14;
    v40000D8 = v9;
    v40000DC = (v10 >> 2) | 0x85000000;
    v8 = 100724736;
  }
  else
  {
    v3 = v12;
    v4 = 0x2000;
    v5 = &v14;
    v6 = &word_30042C0;
    v7 = &word_30041B4;
    do
    {
      v14 = 0;
      v40000D4 = &v14;
      v40000D8 = v3;
      v40000DC = -2063596544;
      v3 += 4096;
      v4 -= 4096;
    }
    while ( v4 > 0x1000 );
    v14 = 0;
    v40000D4 = &v14;
    v40000D8 = v3;
    v40000DC = (v4 >> 2) | 0x85000000;
    v8 = v13;
  }
  v40000D4 = v5;
  v40000D8 = v8;
  v40000DC = -2063597056;
  *v6 = 0;
  *v7 = 0;
  return v15;
}
