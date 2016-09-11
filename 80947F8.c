int __fastcall sub_80947F8(char a1, unsigned __int8 a2)
{
  char v2; // r4@1
  unsigned __int8 v3; // r5@1
  int v4; // r0@1
  unsigned __int16 v5; // r0@1
  int v7; // [sp+0h] [bp-1Ch]@1
  int v8; // [sp+18h] [bp-4h]@1

  v2 = a1;
  v3 = a2;
  v4 = MenuPrint((int)&gUnknown_0842C992, a1, a2);
  v5 = GetPokedexSeenCount(v4);
  ConvertIntToDecimalStringN((char *)&v7, v5, 1, 3);
  sub_8072B4C(&v7, v2 + 12, v3);
  return v8;
}
