int __fastcall sub_80F0FFC(int a1)
{
  int v2; // [sp+8h] [bp-4h]@0

  sub_80FBFB4(33589128, *(_WORD *)((8 * a1 & 0x7FF) + 0x200CEEA), 0);
  BasicInitMenuWindow((int)&gWindowConfig_81E710C);
  sub_80F19DC(33589128);
  sub_8072C74(33607992, 33589128, 0x58u, 2u);
  MenuPrint(33607992, 0, 5u);
  return v2;
}
