int __fastcall BeginFastPaletteFadeInternal(unsigned __int8 a1)
{
  int v1; // r4@1
  __int16 v3; // [sp+0h] [bp-Ch]@2
  signed __int16 v4; // [sp+2h] [bp-Ah]@4
  int v5; // [sp+8h] [bp-4h]@5

  v1 = a1;
  v202F38C |= 0x7C0u;
  v202F390 = v202F390 & 0xC0 | a1 & 0x3F;
  v202F38F |= 0x80u;
  v202F391 = v202F391 & 0xFC | 1;
  if ( a1 == 2 )
  {
    v3 = 0;
    CpuSet(&v3, 33746632, 16777728);
  }
  if ( !v1 )
  {
    v4 = 0x7FFF;
    CpuSet(&v4, 33746632, 16777728);
  }
  UpdatePaletteFade();
  return v5;
}
