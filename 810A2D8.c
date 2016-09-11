int __fastcall sub_810A2D8(unsigned __int8 a1)
{
  int *v1; // r4@1
  unsigned __int16 v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = sub_8109E50(*((_WORD *)v1 + 4));
  cry_related(v2, 0);
  MenuDrawTextWindow(2u, 0xEu);
  MenuPrint((int)&OtherText_DoYouChoosePoke, 3, 0xFu);
  DisplayYesNoMenu(0x15u, 7u, 1);
  *v1 = (int)sub_810A330;
  return v4;
}
