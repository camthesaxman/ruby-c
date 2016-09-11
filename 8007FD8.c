int __fastcall PrintHex(unsigned int a1, unsigned __int8 a2, unsigned __int8 a3, int a4)
{
  unsigned int v4; // r5@1
  int v5; // r6@1
  int v6; // r7@1
  int v7; // r4@1
  int i; // r4@3
  int v10; // [sp+0h] [bp-24h]@2
  int v11; // [sp+20h] [bp-4h]@5

  v4 = a1;
  v5 = a2;
  v6 = a3;
  a4 = (unsigned __int8)a4;
  v7 = 0;
  if ( (signed int)(unsigned __int8)a4 > 0 )
  {
    do
    {
      *((_BYTE *)&v10 + v7) = v4 & 0xF;
      v4 >>= 4;
      ++v7;
    }
    while ( v7 < a4 );
  }
  for ( i = a4 - 1; i >= 0; --i )
  {
    PrintHexDigit(*((_BYTE *)&v10 + i), v5, v6);
    v5 = (v5 + 1) & 0xFF;
  }
  return v11;
}
