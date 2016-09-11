int __fastcall BeginFastPaletteFade(unsigned __int8 a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  v202F392 = v202F392 & 0x87 | 0x10;
  BeginFastPaletteFadeInternal(a1);
  return v2;
}
