signed int sub_80F5FB4()
{
  signed int result; // r0@3
  int v1; // r0@5
  int v2; // r4@7

  if ( v2008770 && v20087C9 )
  {
    if ( v2008770 > 7 )
      LOWORD(v1) = -8;
    else
      v1 = 0xFFFF * v2008770 & 0xFFFF;
    v2 = (signed __int16)v1;
    sub_80F063C((signed __int16)v1);
    sub_80F6074(v2);
    result = 2;
  }
  else
  {
    result = 0;
  }
  return result;
}
