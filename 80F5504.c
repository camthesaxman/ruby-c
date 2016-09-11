unsigned int sub_80F5504()
{
  int v0; // r1@1
  unsigned int result; // r0@2

  v0 = v2009342;
  if ( v2009342 <= 9u )
  {
    ++v2009342;
    sub_80F556C(20 * v0 + 33591380);
    result = (-(v2009342 ^ 0xA) | v2009342 ^ 0xAu) >> 31;
  }
  else
  {
    result = 0;
  }
  return result;
}
