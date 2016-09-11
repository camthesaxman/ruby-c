int __fastcall CreateShopMenu(unsigned __int8 a1)
{
  int v1; // r4@1

  v1 = a1;
  script_env_2_enable();
  byte_3000714 = v1;
  byte_3000711 = 0;
  if ( v1 )
  {
    byte_3000712 = 1;
    MenuDrawTextWindow(0, 0);
    PrintMenuItemsReordered(1, 1, 2u, (int)&gUnknown_083CC6D0, (int)&gUnknown_083CC6EB);
  }
  else
  {
    byte_3000712 = 2;
    MenuDrawTextWindow(0, 0);
    PrintMenuItemsReordered(1, 1, 3u, (int)&gUnknown_083CC6D0, (int)&gUnknown_083CC6E8);
  }
  InitMenu(0, 1, 1, byte_3000712 + 1, 0, 9);
  return (unsigned __int8)CreateTask((int)sub_80B2E38, 8);
}
