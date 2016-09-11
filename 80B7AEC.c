int __fastcall sub_80B7AEC(signed int a1, char a2, unsigned __int8 a3)
{
  char v3; // r4@1
  unsigned __int8 v4; // r5@1
  _BYTE *v5; // r6@1
  char v7; // [sp+0h] [bp-30h]@1
  _BYTE v8[3]; // [sp+1h] [bp-2Fh]@1
  int v9; // [sp+2Ch] [bp-4h]@1

  v3 = a2;
  v4 = a3;
  v7 = -73;
  v5 = ConvertIntToDecimalString(v8, a1);
  sub_8072B4C(&v7, v3, v4);
  *v5 = -4;
  v5[1] = 20;
  v5[2] = 0;
  v5[3] = -1;
  return v9;
}
