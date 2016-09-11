int __fastcall sub_8104BC8(int a1)
{
  int v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( word_300179E & 6 )
  {
    BeginNormalPaletteFade(-1, 0, 0, 0x10u, 0);
    ++*(_WORD *)(v1 + 8);
  }
  return v3;
}
