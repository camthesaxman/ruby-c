int sub_8094354()
{
  char *v0; // r0@2
  char *v1; // r0@2
  char *v2; // r0@2
  char *v3; // r0@2
  int v5; // [sp+8h] [bp-4h]@0

  if ( v2000008 )
  {
    v0 = ConvertIntToDecimalStringN(&gStringVar1, v200006A, 1, 3);
    v1 = StringCopy(v0, &gUnknown_083B5EF4);
    v2 = ConvertIntToDecimalStringN(v1, v200006C, 2, 2);
    v3 = StringCopy(v2, &gUnknown_083B5EF4);
    ConvertIntToDecimalStringN(v3, v200006E, 2, 2);
    sub_8072B4C(&gStringVar1, 28, 5u);
  }
  return v5;
}
