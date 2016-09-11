int __fastcall ConvertBcdToBinary(int a1)
{
  unsigned int v1; // r0@1
  int result; // r0@3

  v1 = a1 << 24;
  if ( v1 >> 24 <= 0x9F && (BYTE3(v1) & 0xFu) <= 9 )
    result = 10 * (v1 >> 28) + (BYTE3(v1) & 0xF);
  else
    result = 255;
  return result;
}
