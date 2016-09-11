signed int __fastcall sub_80FD3D0(_WORD *a1, unsigned __int8 a2)
{
  int v2; // r4@1
  unsigned int v3; // r0@1
  unsigned int v4; // r1@1
  unsigned int v5; // r3@1
  unsigned int v6; // r0@1
  signed int result; // r0@4

  v2 = a2;
  v3 = *a1;
  v4 = v3 & 0x1F;
  v3 <<= 16;
  v5 = (v3 >> 21) & 0x1F;
  v6 = (v3 >> 26) & 0x1F;
  if ( v4 > 0x10 || v5 > 0x10 || v6 > 0x10 )
    result = 0x7FFF;
  else
    result = (unsigned __int16)sub_80FD40C(v2);
  return result;
}
