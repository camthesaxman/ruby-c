int __fastcall sub_81221F8(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r2@1
  void *v3; // r1@3
  unsigned __int8 v4; // r0@3
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  sub_806D538(5u, 1);
  if ( (unsigned __int8)sub_8122030((int)&dword_3004360[25 * (unsigned __int8)byte_3005CE0], (int)dword_3004360, v2) == 1 )
  {
    if ( (unsigned __int8)sub_81221CC(byte_3005CE0 + 1) == 1 )
    {
      LOWORD(dword_3004B20[10 * v1 + 4]) = 1;
      v3 = &gUnknown_084017D8;
      v4 = 1;
    }
    else
    {
      LOWORD(dword_3004B20[10 * v1 + 4]) = 0;
      v3 = &gUnknown_084017D8;
      v4 = 0;
    }
    sub_806E750(v4, (int)v3);
  }
  else
  {
    LOWORD(dword_3004B20[10 * v1 + 4]) = 2;
    sub_806E750(2u, (int)&gUnknown_084017D8);
  }
  return v6;
}
