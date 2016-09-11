unsigned int sub_80F170C()
{
  int v0; // r0@1

  v0 = v2008766 + 16;
  v2008766 += 16;
  if ( v0 << 16 > 0 )
    v2008766 = 0;
  return (-v2008766 | (unsigned int)v2008766) >> 31;
}
