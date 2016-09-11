int unref_sub_8083F6C()
{
  MenuZeroFillScreen();
  MenuDrawTextWindow(0, 0);
  PrintMenuItems(1, 1, 9u, (int)&gUnknown_0839B2C0);
  InitMenu(0, 1, 1, 9, 0, 9);
  dword_3004AE8 = (int)sub_8083F2C;
  return 0;
}
