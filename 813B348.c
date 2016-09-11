int __fastcall sub_813B348(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  MenuDrawTextWindow(0, 0);
  PrintMenuItems(1, 1, 4u, (int)&gUnknown_084062F8);
  InitMenu(0, 1, 1, 4, 0, 11);
  dword_3004B20[10 * v1] = (int)sub_813B3A0;
  return v3;
}
