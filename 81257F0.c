signed int __fastcall sub_81257F0(unsigned __int16 a1)
{
  unsigned int v1; // r4@1
  signed int result; // r0@2

  v1 = ((((a1 + (unsigned __int16)word_3005E9C - 1) & 0xFFFFu) % 0xE & 0xFFFF) + 14 * (dword_3005EAC & 1)) & 0xFFFF;
  if ( call_via_r3(v1, 4088, 37, ProgramFlashByte) << 16 )
  {
    sub_81251D4(0, v1);
    word_3005E9C = word_3005EA4;
    dword_3005EAC = dword_3005EA0;
    result = 255;
  }
  else
  {
    sub_81251D4(1, v1);
    result = 1;
  }
  return result;
}
