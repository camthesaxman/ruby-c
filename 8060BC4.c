int __fastcall zffu_offset_calc(int a1, unsigned __int8 a2)
{
  return *(&gUnknown_08375757[a2 - 5] + (4 * a1 & 0x3FF));
}
