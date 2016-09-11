int __fastcall LoadTextWindowTiles(unsigned __int8 a1, int a2)
{
  int v2; // r4@1
  void **v3; // r0@1
  int v5; // [sp+4h] [bp-4h]@0

  v2 = a2;
  v3 = GetTextWindowFrameGraphics(a1);
  CpuFastSet(*v3, v2, 72);
  return v5;
}
