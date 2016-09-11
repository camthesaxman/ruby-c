int __fastcall sub_80947B0(char a1, unsigned __int8 a2)
{
  char v2; // r4@1
  unsigned __int8 v3; // r5@1
  int v4; // r0@1
  unsigned __int8 v5; // r0@1
  int v7; // [sp+0h] [bp-1Ch]@1
  int v8; // [sp+18h] [bp-4h]@1

  v2 = a1;
  v3 = a2;
  v4 = MenuPrint((int)&gUnknown_0842C98A, a1, a2);
  v5 = GetBadgeCount(v4);
  ConvertIntToDecimalString(&v7, v5);
  sub_8072B4C(&v7, v2 + 12, v3);
  return v8;
}
