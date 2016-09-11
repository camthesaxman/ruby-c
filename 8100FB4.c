int __fastcall sub_8100FB4(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  LOWORD(dword_3004B20[10 * a1 + 7]) = 0;
  sub_810045C();
  gSprites[68 * v20391A8 + 62] &= 0xFBu;
  dword_2020020[17 * v20391A8] = (int)SpriteCallbackDummy;
  DisplayItemMessageOnField(v1, (int)"Нигд", (int)sub_810156C, 0);
  return v3;
}
