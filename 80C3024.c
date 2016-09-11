int __fastcall sub_80C3024(unsigned __int16 a1, unsigned __int8 a2, unsigned __int8 a3, int a4, int a5)
{
  int v5; // r4@1
  int v6; // r5@1
  unsigned int v7; // r1@2
  unsigned int v8; // r5@2
  int v9; // r2@2
  int v10; // r4@3
  signed int v11; // r3@3
  _WORD *v12; // r2@3
  int v13; // r0@7
  int v15; // [sp+Ch] [bp-4h]@0

  v5 = a2;
  v6 = a3;
  if ( a4 << 24 )
  {
    v40000D4 = sub_809D4F4(a1, a5) + (a3 << 9) + 128;
    v40000D8 = (v5 << 9) + 100679680;
    v40000DC = -2080374688;
    v7 = (((v5 << 20) + 0x2000000) | (unsigned int)((v5 + 10) << 28)) >> 16;
    v8 = (unsigned int)(6291456 * v5 + 8585216) >> 16;
    v9 = 0;
    do
    {
      v10 = v9 + 1;
      v11 = 3;
      v12 = (_WORD *)(2 * (32 * v9 + v8) + 100712448);
      do
      {
        *v12 = v7;
        v7 = (v7 + 1) & 0xFFFF;
        ++v12;
        --v11;
      }
      while ( v11 >= 0 );
      v9 = v10;
    }
    while ( v10 <= 2 );
  }
  else
  {
    v13 = sub_809D4F4(a1, a5);
    RequestSpriteCopy(v13 + (v6 << 9) + 128, (v5 << 9) + 100679680, 384);
  }
  return v15;
}
