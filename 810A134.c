int __fastcall sub_810A134(unsigned __int8 a1)
{
  int *v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  sub_810A42C(255, *((_BYTE *)v1 + 8));
  MenuDrawTextWindow(2u, 0xEu);
  MenuPrint((int)&OtherText_BirchInTrouble, 3, 0xFu);
  *v1 = (int)sub_810A178;
  return v3;
}
