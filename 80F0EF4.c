signed int sub_80F0EF4()
{
  signed int result; // r0@2
  int v1; // r4@4

  if ( v200D15C <= 6u )
  {
    ++v2000306;
    if ( v2000306 > 1u )
    {
      v2000306 = 0;
      v1 = (2 * v200D15C + 2 + v2008778) & 0x1F;
      BasicInitMenuWindow((int)&gWindowConfig_81E70D4);
      MenuZeroFillWindowRect(0xCu, v1, 0x1Fu, v1 + 1);
      ++v200D15C;
    }
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
