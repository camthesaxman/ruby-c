int __fastcall Task_BuyHowManyDialogueHandleInput(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r5@1
  unsigned int v3; // r4@1
  int v4; // r0@4
  int v6; // [sp+Ch] [bp-4h]@0

  v1 = a1 << 24;
  v2 = v1 >> 24;
  v3 = v1 >> 24;
  if ( (unsigned __int8)sub_80A5350(BYTE3(v1)) == 1 )
  {
    MenuZeroFillWindowRect(6u, 0xBu, 0xCu, 0xBu);
    BuyMenuDisplayMessage(v203855E, HIWORD(dword_3004B20[10 * v2 + 2]));
  }
  else if ( word_300179E & 1 )
  {
    audio_play(5u);
    MenuZeroFillWindowRect(0, 0xAu, 0xDu, 0xDu);
    sub_80A36B8((int)gBG1TilemapBuffer, 0, 10, 0xDu, 3u);
    v4 = itemid_get_market_price(v203855E);
    ConvertIntToDecimalStringN(
      &gStringVar1,
      HIWORD(dword_3004B20[10 * v2 + 2]) * ((unsigned int)(v4 << 16) >> 17),
      0,
      6);
    StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840EEE9);
    DisplayCannotUseItemMessage(v2, &gStringVar4, sub_80A6650, 1);
  }
  else if ( word_300179E & 2 )
  {
    audio_play(5u);
    BuyMenuPrintItemQuantityAndPrice(v3);
  }
  return v6;
}
