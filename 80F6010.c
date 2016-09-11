signed int sub_80F6010()
{
  signed int result; // r0@3
  int v1; // r4@4

  if ( v2008772 != v2008774 && v20087C9 )
  {
    v1 = (v2008774 - v2008772) & 0xFFFF;
    if ( (signed __int16)(v2008774 - v2008772) > 8 )
      LOWORD(v1) = 8;
    sub_80F063C((signed __int16)v1);
    sub_80F6074((signed __int16)v1);
    result = 2;
  }
  else
  {
    result = 0;
  }
  return result;
}
