int __fastcall sub_8139F58(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  MenuZeroFillWindowRect(0, 0, 0xAu, 9u);
  MenuDrawTextWindow(0, 0);
  PrintMenuItems(1, 1, 4u, (int)&gUnknown_084062C0);
  InitMenu(0, 1, 1, 4, v1, 10);
  sub_8139FB4(gUnknown_08406288[v1]);
  return v3;
}
