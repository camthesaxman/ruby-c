int sub_80F5DD4()
{
  int result; // r0@2

  if ( word_30017A0 & 0x40 )
  {
    LOBYTE(result) = sub_80F5E20();
  }
  else if ( word_30017A0 & 0x80 )
  {
    LOBYTE(result) = sub_80F5EE4();
  }
  else if ( word_30017A0 & 0x20 )
  {
    LOBYTE(result) = sub_80F5FB4();
  }
  else
  {
    if ( !(word_30017A0 & 0x10) )
      return 0;
    LOBYTE(result) = sub_80F6010();
  }
  return (unsigned __int8)result;
}
