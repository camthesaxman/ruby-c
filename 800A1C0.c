int PrintBadgeCount()
{
  int v0; // r0@1
  unsigned __int8 v1; // r0@1
  int v3; // [sp+0h] [bp-14h]@1
  int v4; // [sp+10h] [bp-4h]@1

  v0 = MenuPrint(&gMainMenuString_Badges, 16, 5);
  v1 = GetBadgeCount(v0);
  ConvertIntToDecimalString(&v3, v1);
  sub_80729D8(&v3, 205, 40, 1);
  return v4;
}
