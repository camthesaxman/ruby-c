int __fastcall ItemIdToBerryType(int a1)
{
  unsigned int v1; // r0@1
  int result; // r0@2

  v1 = a1 << 16;
  if ( (v1 - 8716288) >> 16 > 0x2A )
    result = 1;
  else
    result = ((v1 >> 16) + 124) & 0xFF;
  return result;
}
