int __fastcall sub_808BE34(unsigned __int8 a1)
{
  char v2; // [sp+0h] [bp-8h]@1
  char v3; // [sp+1h] [bp-7h]@1
  int v4; // [sp+4h] [bp-4h]@1

  v2 = 15;
  v3 = 15;
  *(&v2 + a1) = 8;
  sub_808BC60((char *)&gUnknown_0842C43D, 120, 0x58u, v2);
  sub_808BC60((char *)&gUnknown_0842C445, -84, 0x58u, v3);
  return v4;
}
