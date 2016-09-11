int __fastcall BeginHardwarePaletteFade(unsigned __int8 a1, char a2, unsigned __int8 a3, unsigned __int8 a4, char a5)
{
  char v5; // r1@1
  char v6; // r6@1
  char v7; // r6@2
  int v9; // [sp+10h] [bp-4h]@0

  v202F388 = a1;
  v5 = a2 & 0x3F;
  v202F38C = v202F38C & 0xC0 | v5;
  v6 = v202F390 & 0xC0 | v5;
  v202F390 = v202F390 & 0xC0 | v5;
  v202F38C = v202F38C & 0xF83F | ((a3 & 0x1F) << 6);
  v202F38D = v202F38D & 7 | 8 * a4;
  v202F38F |= 0x80u;
  v202F391 = ((v202F391 & 0xFC | 2) & 0xFB | 4 * (a5 & 1)) & 0xF7;
  if ( a3 >= (unsigned int)a4 )
    v7 = v6 | 0x40;
  else
    v7 = v6 & 0xBF;
  v202F390 = v7;
  return v9;
}
