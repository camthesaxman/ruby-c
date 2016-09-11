int __fastcall sub_8104B80(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = sub_8104DA4(a1);
  sub_81065DC(v2);
  BasicInitMenuWindow((int)&gWindowConfig_81E7144);
  sub_80729D8((int)"Ì¿¿Æ", 10, 32, 1u);
  BeginNormalPaletteFade(-1, 0, 0x10u, 0, 0);
  ++*(_WORD *)(v1 + 8);
  return v4;
}
