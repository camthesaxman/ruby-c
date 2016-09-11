int __fastcall sub_810C540(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int v2; // r0@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = BasicInitMenuWindow((int)&gWindowConfig_81E6E50);
  sub_8072DEC(v2);
  MenuZeroFillWindowRect(7u, 4u, 0xDu, 0xBu);
  StringCopy(&gStringVar1, (&gUnknown_083F7EB8)[4 * *(_BYTE *)(8 * (v2039248 + v2039249) + 0x2025F2C)]);
  StringExpandPlaceholders(gStringVar4, (unsigned __int8 *)"Œ‹Ê„Î");
  DisplayItemMessageOnField(v1, (int)gStringVar4, (int)sub_810C5EC, 0);
  return v4;
}
