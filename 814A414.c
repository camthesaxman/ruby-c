int unref_sub_814A414()
{
  MenuZeroFillScreen();
  MenuDrawTextWindow(0, 0);
  PrintMenuItems(2, 1, 8u, (int)&gUnknown_0842C29C);
  InitMenu(0, 1, 1, 8, 0, 15);
  dword_3004AE8 = (int)sub_814A464;
  return 0;
}
