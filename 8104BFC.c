int __fastcall sub_8104BFC(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  MenuZeroFillScreen();
  v2 = BasicInitMenuWindow((int)&gWindowConfig_81E7128);
  sub_81064B8(v2);
  sub_8104CAC(*(_BYTE *)(v1 + 10));
  sub_810423C(v2000002);
  BeginNormalPaletteFade(-1, 0, 0x10u, 0, 0);
  ++*(_WORD *)(v1 + 8);
  return v4;
}
