int __fastcall sub_8148830(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  ResetSpriteData();
  v4000000 = 6464;
  SetVBlankCallback((int)sub_814881C);
  MenuDrawTextWindow(2u, 0xEu);
  MenuPrint((int)"Ω‡Ÿ’Ê", 3, 0xFu);
  MenuDrawTextWindow(2u, 1u);
  PrintMenuItems(3, 2, 2u, (int)&gUnknown_08376D74);
  InitMenu(0, 3, 2, 2, 1, 5);
  dword_3004B20[10 * v1] = (int)sub_81488BC;
  return v3;
}
