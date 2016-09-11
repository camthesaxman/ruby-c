int __fastcall sub_80A6618(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  MenuZeroFillWindowRect(7u, 6u, 0xDu, 0xCu);
  sub_80A36B8((int)gBG1TilemapBuffer, 7u, 6, 6u, 6u);
  BuyMenuPrintItemQuantityAndPrice(v1);
  return v3;
}
