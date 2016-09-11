signed int sub_80F0C48()
{
  signed int result; // r0@2

  if ( v200D15C <= 7u )
  {
    ++v2000306;
    if ( v2000306 <= 1u
      || (v2000306 = 0,
          BasicInitMenuWindow((int)&gWindowConfig_81E70D4),
          sub_80F0A74(v200D15C + v2008770, 2 * v200D15C + v2008778),
          ++v200D15C,
          v200D15C <= 7u) )
    {
      result = 1;
    }
    else
    {
      sub_80F081C(0);
      result = 0;
    }
  }
  else
  {
    result = 0;
  }
  return result;
}
