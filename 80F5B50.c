signed int sub_80F5B50()
{
  __int16 *v0; // r1@4
  __int16 *v1; // r0@4
  signed int v2; // r3@4
  signed int result; // r0@6

  if ( v2009345 )
  {
    if ( v2009345 == 1 )
    {
      sub_80895F8(67108928, -1503657983, 1);
      ++v2009345;
    }
    result = 0;
  }
  else
  {
    dp12_8087EA4();
    v0 = &word_3005580;
    v1 = &word_3004E00;
    v2 = 15;
    do
    {
      *v1 = 239;
      v1[1] = 239;
      *v0 = 239;
      v0[1] = 239;
      v0 += 2;
      v1 += 2;
      --v2;
    }
    while ( v2 >= 0 );
    ++v2009345;
    result = 1;
  }
  return result;
}
