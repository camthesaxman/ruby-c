int __fastcall sub_80BC980(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  sub_80F996C(0);
  sub_80F996C(1);
  MenuDrawTextWindow(1u, 0);
  PrintMenuItems(2, 1, 2u, (int)&gUnknown_083D13D4);
  InitMenu(0, 2, 1, 2, 0, 10);
  dword_3004B20[10 * v1] = (int)sub_80BC9E4;
  return v3;
}
