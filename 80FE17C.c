signed int __fastcall sub_80FE17C(_WORD *a1)
{
  unsigned int v1; // r0@1
  signed int result; // r0@2

  v1 = ((signed int)((*a1 & 0x1F) + (((unsigned int)*a1 << 16 >> 21) & 0x1F) + (((unsigned int)*a1 << 16 >> 26) & 0x1F))
      / 3 & 0x1E) << 16;
  if ( v1 )
    result = v1 >> 17;
  else
    result = 1;
  return result;
}
