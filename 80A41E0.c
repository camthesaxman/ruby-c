int __fastcall sub_80A41E0(int a1, unsigned __int16 a2, int a3, unsigned __int16 a4, char a5)
{
  int v5; // r9@1
  int v6; // r5@1
  char *v7; // r0@1
  _BYTE *v8; // r0@1
  int v10; // [sp+18h] [bp-4h]@0

  v5 = a3;
  v6 = a4;
  *(_BYTE *)a1 = -4;
  *(_BYTE *)(a1 + 1) = 19;
  *(_BYTE *)(a1 + 2) = 8;
  v7 = ConvertIntToDecimalStringN((char *)(a1 + 3), a2, 2, 2);
  *v7 = -4;
  v7[1] = 19;
  v7[2] = 24;
  v8 = (_BYTE *)sub_8072C74((int)(v7 + 3), v5, 120 - 6 * (a5 + 1), 0);
  *v8 = -71;
  sub_8072C14((int)(v8 + 1), v6, 0x78u, 1u);
  return v10;
}
