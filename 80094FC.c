int __fastcall FormatHexDate(char *a1, signed int a2, signed int a3, signed int a4)
{
  signed int v4; // r5@1
  signed int v5; // r6@1
  char *v6; // r0@1
  char *v7; // r0@1
  int v9; // [sp+Ch] [bp-4h]@0

  v4 = a3;
  v5 = a4;
  v6 = ConvertIntToHexStringN(a1, a2, 2, 4u);
  *v6 = -82;
  v7 = ConvertIntToHexStringN(v6 + 1, v4, 2, 2u);
  *v7 = -82;
  *ConvertIntToHexStringN(v7 + 1, v5, 2, 2u) = -1;
  return v9;
}
