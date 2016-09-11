int __fastcall InitYesNoMenu(int a1, int a2)
{
  unsigned int v2; // r4@1
  unsigned int v3; // r5@1
  int v5; // [sp+14h] [bp-4h]@0

  v2 = (unsigned int)((a1 << 24) + 0x1000000) >> 24;
  v3 = (unsigned int)((a2 << 24) + 0x1000000) >> 24;
  PrintMenuItems(
    (unsigned int)((a1 << 24) + 0x1000000) >> 24,
    (unsigned int)((a2 << 24) + 0x1000000) >> 24,
    2u,
    (int)&gUnknown_08376D74);
  InitMenu(0, v2, v3, 2);
  return v5;
}
