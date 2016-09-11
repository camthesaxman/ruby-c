int __fastcall sub_810C610(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  MenuZeroFillWindowRect(7u, 6u, 0xDu, 0xBu);
  sub_810CA6C((v2039249 + v2039248) & 0xFF);
  StringExpandPlaceholders(gStringVar4, (unsigned __int8 *)&gUnknown_0840EC33);
  DisplayItemMessageOnField(v1, (int)gStringVar4, (int)sub_810C704, 0);
  sub_810BC98();
  sub_810BD08();
  return v3;
}
