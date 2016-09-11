signed int __fastcall sub_80FB2EC(unsigned __int16 a1, int a2)
{
  unsigned int v2; // r2@1
  signed int result; // r0@4

  v2 = (unsigned int)((a2 << 16) - 0x20000) >> 16;
  if ( v2 <= 0xE && a1 && a1 <= 0x1Cu )
    result = *(&gRegionMapSections[28 * v2] + ((a1 - 1) & 0xFFFF));
  else
    result = 88;
  return result;
}
