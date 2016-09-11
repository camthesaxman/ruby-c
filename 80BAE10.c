int __fastcall sub_80BAE10(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v5; // [sp+0h] [bp-1Ch]@1
  char v6; // [sp+4h] [bp-18h]@1
  int v7; // [sp+18h] [bp-4h]@1

  v2 = a1;
  v3 = a2;
  memcpy(&v5, (const char *)&gUnknown_083D03DC, 2);
  memcpy(&v6, (const char *)&gUnknown_083D03DE, 2);
  MenuPrint((int)&v6, gUnknown_083D0300[2 * v2], gUnknown_083D0300[2 * v2 + 1]);
  MenuPrint((int)&v5, gUnknown_083D0300[2 * v3], gUnknown_083D0300[2 * v3 + 1]);
  return v7;
}
