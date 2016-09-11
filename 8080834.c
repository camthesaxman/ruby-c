int __fastcall sub_8080834(unsigned __int16 a1)
{
  int result; // r0@1

  result = (a1 + v2025763) << 16;
  v2025763 = (result & 0x30000u) >> 16;
  return result;
}
