int PrintPlayTime()
{
  int v1; // [sp+0h] [bp-38h]@1
  char v2; // [sp+10h] [bp-28h]@1
  int v3; // [sp+34h] [bp-4h]@1

  MenuPrint(&gMainMenuString_Time, 16, 3);
  FormatPlayTime(&v1, v2024EB2, v2024EB4, 1);
  sub_8072C74(&v2, &v1, 48, 1);
  MenuPrint(&v2, 22, 3);
  return v3;
}
