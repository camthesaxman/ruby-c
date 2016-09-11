int sub_8076380()
{
  int v0; // r6@2
  signed int v1; // r5@2
  signed int v2; // r12@2
  int v3; // r7@2
  signed int v4; // r4@3
  __int16 *v5; // r3@3
  __int16 *v6; // r2@3
  __int16 v7; // r1@4
  int v8; // r5@6
  int v9; // r2@7
  _WORD *v10; // r1@7
  signed int v11; // r4@7
  int v13; // [sp+0h] [bp-20h]@2
  int v14; // [sp+4h] [bp-1Ch]@2
  int v15; // [sp+1Ch] [bp-4h]@10

  if ( sub_80AEB1C(v2019348) << 24 )
  {
    sub_8078914(&v13);
    v0 = v14;
    v1 = 0;
    v2 = 7;
    v3 = 0;
    do
    {
      v4 = 0;
      v5 = (__int16 *)(v3 + v0);
      v6 = (__int16 *)(2 * v2 + v0);
      do
      {
        v7 = *v5;
        *v5 = *v6;
        *v6 = v7;
        ++v5;
        --v6;
        ++v4;
      }
      while ( v4 <= 3 );
      v2 += 32;
      v3 += 64;
      ++v1;
    }
    while ( v1 <= 7 );
    v8 = 0;
    do
    {
      v9 = v8 + 1;
      v10 = (_WORD *)((v8 << 6) + v0);
      v11 = 7;
      do
      {
        *v10 ^= 0x400u;
        ++v10;
        --v11;
      }
      while ( v11 >= 0 );
      ++v8;
    }
    while ( v9 <= 7 );
  }
  return v15;
}
