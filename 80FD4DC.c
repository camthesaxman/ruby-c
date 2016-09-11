signed int __fastcall sub_80FD4DC(_WORD *a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r1@1
  unsigned int v3; // r3@1
  unsigned int v4; // r0@1
  signed int result; // r0@4

  v1 = *a1;
  v2 = v1 & 0x1F;
  v1 <<= 16;
  v3 = (v1 >> 21) & 0x1F;
  v4 = (v1 >> 26) & 0x1F;
  if ( v2 > 0x10 || v3 > 0x10 || v4 > 0x10 )
    result = 0x7FFF;
  else
    result = 0;
  return result;
}
