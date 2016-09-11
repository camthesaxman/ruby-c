int __fastcall sub_80C5A08(char *a1, int a2)
{
  char *v2; // r6@1
  int v3; // r5@1
  int v4; // r0@1
  int v5; // r0@3
  unsigned int v6; // r0@3
  unsigned int v7; // r5@3
  char *v8; // r0@3
  char *v9; // r0@3
  int v11; // [sp+0h] [bp-14h]@1
  int v12; // [sp+10h] [bp-4h]@3

  v2 = a1;
  v3 = a2;
  memcpy(&v11, (const char *)&gUnknown_083D188C, 2);
  v4 = _floatsidf(10 * v3);
  if ( 10 * v3 < 0 )
    v4 = _adddf3(v4);
  v5 = _divdf3(v4);
  v6 = _fixunsdfsi(v5);
  v7 = v6;
  v8 = ConvertIntToDecimalStringN(v2, v6 / 0xA, 0, 8);
  v9 = StringAppend(v8, &v11);
  ConvertIntToDecimalStringN(v9, v7 % 0xA, 0, 1);
  return v12;
}
