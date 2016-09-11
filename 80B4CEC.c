int __fastcall BerryTypeToItemId(int a1)
{
  unsigned int v1; // r0@1
  int result; // r0@2

  v1 = a1 << 16;
  if ( (v1 - 0x10000) >> 16 > 0x2A )
    result = 133;
  else
    result = ((v1 >> 16) + 132) & 0xFFFF;
  return result;
}
