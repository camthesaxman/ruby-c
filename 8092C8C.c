int __fastcall sub_8092C8C(int a1)
{
  unsigned int v1; // r1@2
  signed int v2; // r3@4
  signed int v3; // r2@5
  unsigned int v4; // r1@5
  unsigned __int16 v5; // r4@5
  signed int v6; // r3@5
  unsigned int v7; // r1@8
  int v8; // r3@11
  unsigned int v9; // r1@12
  unsigned __int16 v10; // r4@12
  int v12; // [sp+Ch] [bp-4h]@0

  if ( a1 << 24 )
  {
    v8 = 0;
    do
    {
      v9 = 17;
      v10 = v8 + 1;
      do
      {
        *(_WORD *)((v8 << 6) + 2 * v9 + 0x6007800) = 79;
        v9 = (v9 + 1) & 0xFFFF;
      }
      while ( v9 <= 0x1D );
      v8 = (unsigned __int16)(v8 + 1);
    }
    while ( v10 <= 0xDu );
  }
  else
  {
    v6007822 = 3083;
    v1 = 18;
    do
    {
      *(_WORD *)(2 * v1 + 0x6007800) = 2061;
      v1 = (v1 + 1) & 0xFFFF;
    }
    while ( v1 <= 0x1C );
    v600783A = 2059;
    v2 = 1;
    do
    {
      v3 = v2 << 6;
      *(_WORD *)((v2 << 6) + 0x6007822) = 1034;
      v4 = 18;
      v5 = v2 + 1;
      v6 = v2 << 6;
      do
      {
        *(_WORD *)(v6 + 2 * v4 + 100694016) = 2;
        v4 = (v4 + 1) & 0xFFFF;
      }
      while ( v4 <= 0x1C );
      *(_WORD *)(v3 + 100694074) = 10;
      v2 = v5;
    }
    while ( v5 <= 0xCu );
    v6007B62 = 1035;
    v7 = 18;
    do
    {
      *(_WORD *)(2 * v7 + 0x6007B40) = 13;
      v7 = (v7 + 1) & 0xFFFF;
    }
    while ( v7 <= 0x1C );
    v6007B7A = 11;
  }
  return v12;
}
