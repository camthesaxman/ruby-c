int __fastcall unref_sub_8095D08(int a1, unsigned __int16 a2, int a3, int a4, unsigned __int16 a5)
{
  int v5; // r4@1
  unsigned int v6; // r3@1
  __int16 v7; // r0@1
  unsigned int v8; // r9@2
  int v9; // r3@3
  unsigned int v10; // r2@3
  unsigned __int16 v11; // r12@3
  __int16 v13; // [sp+0h] [bp-28h]@4
  unsigned int v14; // [sp+4h] [bp-24h]@1
  int v15; // [sp+24h] [bp-4h]@8

  v5 = a1 + 2 * ((32 * a3 & 0x1FFFFF) + a2);
  v6 = a4 << 17;
  v14 = v6 >> 16;
  v7 = 0;
  if ( a5 > 0u )
  {
    v8 = (v6 >> 17) | 0x81000000;
    do
    {
      v9 = v5;
      v10 = v14;
      v11 = v7 + 1;
      if ( v14 > 0x1000 )
      {
        do
        {
          v13 = 0;
          v40000D4 = &v13;
          v40000D8 = v9;
          v40000DC = -2130704384;
          v9 += 4096;
          v10 -= 4096;
        }
        while ( v10 > 0x1000 );
        v13 = 0;
        v40000D4 = &v13;
        v40000D8 = v9;
        v40000DC = (v10 >> 1) | 0x81000000;
      }
      else
      {
        v13 = 0;
        v40000D4 = &v13;
        v40000D8 = v5;
        v40000DC = v8;
      }
      v5 += 64;
      ++v7;
    }
    while ( v11 < (unsigned int)a5 );
  }
  return v15;
}
