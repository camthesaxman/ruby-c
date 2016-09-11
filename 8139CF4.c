int __fastcall sub_8139CF4(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+10h] [bp-4h]@0

  v1 = a1;
  MenuDrawTextWindow(0, 0);
  PrintMenuItemsReordered(1, 1, byte_30007B4, (int)&gUnknown_08406298, v2039314);
  InitMenu(0, 1, 1, byte_30007B4, 0, 9);
  dword_3004B20[10 * v1] = (int)sub_8139D64;
  return v3;
}
