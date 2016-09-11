signed int __fastcall sub_811C5B4(int a1)
{
  int v1; // r5@1

  v1 = a1;
  v200C000 = 0;
  BlendPalettes(0xFFFFFFFF, 0x10u, 0x7FFF);
  v200C00E = 255;
  *(_WORD *)(v1 + 14) = 0;
  ++*(_WORD *)(v1 + 8);
  return 1;
}
