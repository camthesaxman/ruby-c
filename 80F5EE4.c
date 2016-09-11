signed int sub_80F5EE4()
{
  signed int result; // r0@2
  signed __int16 v1; // r1@6

  if ( v200876E == v2008774 )
  {
    result = 0;
  }
  else if ( v20087C9 && v200876C == 7 )
  {
    sub_80F063C(1);
    sub_80F6074(1);
    result = 2;
  }
  else
  {
    v1 = v200876C++ + 1;
    if ( !v20087C9 && v1 > v2008772 )
      v200876C = v20087C9;
    v200876E = v200876C + v2008770;
    if ( (signed __int16)(v200876C + v2008770) > v2008774 )
      v200876E = v200876C + v2008770 - 1 - v2008774;
    result = 1;
  }
  return result;
}
