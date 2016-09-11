signed int sub_8148540()
{
  unsigned int v0; // r4@1
  signed int result; // r0@4

  v0 = 0;
  do
  {
    word_3005FA0[v0] = *((_WORD *)&gMonPokeblockAnims + 10 * (unsigned __int8)byte_3005F40 + v0);
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 9 );
  if ( word_3005FA8 )
  {
    word_3005FB4 = sine(word_3005FA0[0], word_3005FA4);
    word_3005FB6 = cosine(word_3005FA0[0], word_3005FA6);
    word_3005FB8 = word_3005FA8;
    word_3005FBA = *(_WORD *)(dword_3005F20 + 36);
    word_3005FBC = *(_WORD *)(dword_3005F20 + 38);
    sub_8148710();
    word_3005FA8 = word_3005FB8;
    sub_814862C();
    word_3005FA8 = word_3005FB8;
    result = 0;
  }
  else
  {
    result = 1;
  }
  return result;
}
