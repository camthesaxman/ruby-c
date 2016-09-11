int __fastcall sub_8102BA4(unsigned __int8 a1, __int16 a2)
{
  int v2; // r4@1
  int v3; // r0@1
  unsigned int v4; // r1@1
  int v5; // r0@1

  v2 = a1;
  v3 = (*(_WORD *)(2 * a1 + 0x2000028) + a2) % 21 << 16;
  v4 = (unsigned int)v3 >> 16;
  v5 = v3 >> 16;
  if ( v5 < 0 )
    v4 = (v5 + 21) & 0xFFFF;
  return *(&gUnknown_083ECCB2[21 * v2] + (signed __int16)v4);
}
