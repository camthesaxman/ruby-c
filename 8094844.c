int __fastcall sub_8094844(char a1, unsigned __int8 a2)
{
  char v2; // r4@1
  unsigned __int8 v3; // r5@1
  int v5; // [sp+0h] [bp-1Ch]@1
  int v6; // [sp+18h] [bp-4h]@1

  v2 = a1;
  v3 = a2;
  MenuPrint((int)"ÊÆ»Ó", a1, a2);
  FormatPlayTime(&v5, v2024EB2, v2024EB4, 1);
  sub_8072B4C(&v5, v2 + 12, v3);
  return v6;
}
