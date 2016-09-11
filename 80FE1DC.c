int sub_80FE1DC()
{
  int v1; // [sp+8h] [bp-4h]@0

  sub_80FE2B4();
  MenuDrawTextWindow(0, 0);
  PrintMenuItems(1, 1, 4u, (int)&gUnknown_083EC604);
  InitMenu(0, 1, 1, 4, v20388D4, 9);
  return v1;
}
