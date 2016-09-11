int __fastcall sub_808BCF8(unsigned __int8 a1)
{
  char v2; // [sp+0h] [bp-8h]@1
  char v3; // [sp+1h] [bp-7h]@1
  char v4; // [sp+2h] [bp-6h]@1
  int v5; // [sp+4h] [bp-4h]@1

  v2 = 15;
  v3 = 15;
  v4 = 15;
  *(&v2 + a1) = 8;
  sub_808BC60((char *)&gUnknown_0842C409, 120, 0x28u, v2);
  sub_808BC60((char *)&gUnknown_0842C411, -101, 0x28u, v3);
  sub_808BC60((char *)&gUnknown_0842C418, -72, 0x28u, v4);
  return v5;
}
