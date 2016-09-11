unsigned int sub_80F173C()
{
  v2008766 -= 16;
  if ( v2008766 < -80 )
    v2008766 = -80;
  return (-(v2008766 ^ 0xFFFFFFB0) | v2008766 ^ 0xFFFFFFB0) >> 31;
}
