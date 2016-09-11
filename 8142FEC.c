int __fastcall sub_8142FEC(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  MenuDrawTextWindow(2u, 0xEu);
  MenuPrintMessage((int)&gUnknown_0840E4F1, 3, 0xFu);
  dword_3004B20[10 * v1] = (int)sub_814302C;
  return v3;
}
