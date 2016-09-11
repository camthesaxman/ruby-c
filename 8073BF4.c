signed int __fastcall BeginNormalPaletteFade(int a1, char a2, unsigned __int8 a3, unsigned __int8 a4, __int16 a5)
{
  char v5; // r6@1
  unsigned int v6; // r12@1
  unsigned int v7; // r7@1
  signed int result; // r0@2
  int v9; // r2@3
  char v10; // r3@5
  char v11; // r3@6
  unsigned int v12; // r5@8

  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( v202F38F & 0x80 )
  {
    result = 0;
  }
  else
  {
    v9 = (unsigned __int8)(v202F392 & 0x87) | 0x10;
    v202F392 = v202F392 & 0x87 | 0x10;
    if ( a2 < 0 )
    {
      v202F392 = v9 & 0x87 | 8 * ((((unsigned int)(v9 << 25) >> 28) - a2) & 0xF);
      v5 = 0;
    }
    v202F388 = a1;
    v202F38C = v202F38C & 0xC0 | v5 & 0x3F;
    v10 = v202F390 & 0xC0 | v5 & 0x3F;
    v202F390 = v202F390 & 0xC0 | v5 & 0x3F;
    v202F38C = v202F38C & 0xF83F | ((v6 & 0x1F) << 6);
    v202F38D = v202F38D & 7 | 8 * v7;
    v202F38E = v202F38E & 0x8000 | a5 & 0x7FFF;
    v202F38F |= 0x80u;
    v202F391 &= 0xFCu;
    if ( v6 >= v7 )
      v11 = v10 | 0x40;
    else
      v11 = v10 & 0xBF;
    v202F390 = v11;
    UpdatePaletteFade();
    v12 = (unsigned int)v202F390 >> 7;
    v202F390 &= 0x7Fu;
    CpuSet(33746632, 83886080, 67109120);
    v202F398 = 0;
    if ( (v202F391 & 3) == 2 )
    {
      if ( v202F38F & 0x80 )
        UpdateBlendRegisters();
    }
    v202F390 = v202F390 & 0x7F | ((_BYTE)v12 << 7);
    result = 1;
  }
  return result;
}
