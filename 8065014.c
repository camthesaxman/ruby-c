int __fastcall LoadTextWindowPalette(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r4@1
  void **v3; // r0@1
  int v5; // [sp+4h] [bp-4h]@0

  v2 = a2;
  v3 = GetTextWindowFrameGraphics(a1);
  LoadPalette(v3[1], 16 * v2, 32);
  return v5;
}
