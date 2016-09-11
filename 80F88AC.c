signed int sub_80F88AC()
{
  int v0; // r4@1
  signed int result; // r0@2

  v0 = *(_BYTE *)((unsigned __int8)byte_3000748 + 0x20284CC);
  if ( sub_80F8508((unsigned __int8)byte_3000748) == 1 )
  {
    sub_80F8598((unsigned __int8)byte_3000748, v0);
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
