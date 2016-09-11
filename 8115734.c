int __fastcall sub_8115734(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  DisplayYesNoMenu(0x14u, 8u, 1);
  sub_814AAF8(11678);
  MenuDrawTextWindow(0, 0xEu);
  MenuPrint((int)gUnknown_081C41E3, 1, 0xFu);
  sub_80F914C(v1, (int)&gUnknown_083F8EBC);
  return v3;
}
