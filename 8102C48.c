int __fastcall sub_8102C48(__int16 a1)
{
  int v1; // r0@1
  unsigned int v2; // r1@1
  int v3; // r0@1

  v1 = (v2000016 + a1) % 6 << 16;
  v2 = (unsigned int)v1 >> 16;
  v3 = v1 >> 16;
  if ( v3 < 0 )
    v2 = (v3 + 6) & 0xFFFF;
  return gUnknown_083ECCF1[(signed __int16)v2];
}
