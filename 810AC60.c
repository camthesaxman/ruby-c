int __fastcall sub_810AC60(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  MenuDrawTextWindow(2u, 0x10u);
  MenuPrint((int)&gUnknown_0842D4FF, 3, 0x11u);
  MenuDrawTextWindow(0x17u, 8u);
  PrintMenuItems(24, 9, 2u, (int)&gUnknown_08376D74);
  InitMenu(0, 24, 9, 2, 1, 5);
  dword_3004B20[10 * v1] = (int)c3_80BF560;
  return v3;
}
