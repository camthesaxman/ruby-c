int __fastcall BuyMenuPrintItemQuantityAndPrice(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  sub_80A36B8((int)gBG1TilemapBuffer, 0, 0, 0x1Fu, 0x1Fu);
  RemoveMoneyLabelObject(0, 0);
  MenuZeroFillWindowRect(0, 4u, 0xDu, 0xDu);
  MenuZeroFillWindowRect(0, 0xEu, 0x1Du, 0x13u);
  dword_3004B20[10 * v1] = (int)sub_80A6760;
  return v3;
}
