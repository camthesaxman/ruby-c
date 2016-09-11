int sub_810F908()
{
  int v0; // r3@1
  int result; // r0@2

  v0 = (unsigned __int16)VarGet(16578);
  if ( word_3004038 - v0 <= 6 )
  {
    if ( word_3004038 < 0 )
      result = 8;
    else
      result = (7 - ((unsigned __int16)word_3004038 - v0)) & 0xFFFF;
  }
  else
  {
    result = 0;
  }
  return result;
}
