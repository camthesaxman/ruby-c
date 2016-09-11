int sub_80F20F4()
{
  int result; // r0@1

  result = v4000000 & 0xDFFF;
  v4000000 &= 0xDFFFu;
  return result;
}
