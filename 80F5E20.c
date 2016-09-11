signed int sub_80F5E20()
{
  signed int result; // r0@2
  __int16 v1; // r3@6

  if ( v200876E )
  {
    if ( !v20087C9 || v200876C )
    {
      v1 = v200876C-- - 1;
      if ( !v20087C9 && v1 & 0x8000 )
        v200876C = v2008772;
      v200876E = v200876C + v2008770;
      if ( (signed __int16)(v200876C + v2008770) > v2008774 )
        v200876E = v200876C + v2008770 - 1 - v2008774;
      result = 1;
    }
    else
    {
      sub_80F063C(-1);
      sub_80F6074(-1);
      result = 2;
    }
  }
  else
  {
    result = 0;
  }
  return result;
}
