int unref_sub_80A9B28()
{
  MenuZeroFillScreen();
  MenuDrawTextWindow(0, 0);
  PrintMenuItems(1, 1, 7u, (int)&gUnknown_083C91F0);
  InitMenu(0, 1, 1, 7, 0, 16);
  dword_3004AE8 = (int)sub_80A9B78;
  return 0;
}
