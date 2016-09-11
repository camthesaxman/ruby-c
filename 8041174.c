int __fastcall sub_8041174(int a1, signed int a2)
{
  signed int v2; // r4@1
  unsigned int v3; // r2@1
  int v4; // r3@1
  unsigned int v5; // r1@2

  v2 = a2;
  v3 = 4385;
  v4 = 0;
  if ( a2 > 0 )
  {
    do
    {
      v3 ^= *(_BYTE *)(a1 + v4);
      v5 = 0;
      LOWORD(v4) = v4 + 1;
      do
      {
        if ( v3 & 1 )
          v3 = ((v3 >> 1) ^ 0x8408) & 0xFFFF;
        else
          v3 >>= 1;
        v5 = (v5 + 1) & 0xFFFF;
      }
      while ( v5 <= 7 );
      v4 = (unsigned __int16)v4;
    }
    while ( (unsigned __int16)v4 < v2 );
  }
  return ~v3 & 0xFFFF;
}
