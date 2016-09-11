int sub_8136BB8()
{
  unsigned __int8 v0; // r0@1
  int v2; // [sp+4h] [bp-4h]@0

  v0 = sub_81370A4(v20087DC);
  GetMonData((int)&dword_3004360[25 * v0], 2, v2039304 + 16);
  StringGetEnd10(v2039304 + 16);
  StringAppend((_BYTE *)(v2039304 + 16), &OtherText_GetAPokeBlock);
  BasicInitMenuWindow((int)&gWindowConfig_81E709C);
  MenuDrawTextWindow(0, 0x10u);
  MenuPrint(v2039304 + 16, 1, 0x11u);
  DisplayYesNoMenu(0x17u, 0xAu, 1);
  MoveMenuCursor(0);
  return v2;
}
