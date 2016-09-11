int sub_80F3B58()
{
  int result; // r0@2

  if ( v200BC92 )
  {
    v200BC92 = ((*(_BYTE *)(v2009348 + 63) >> 5) ^ 1) & 1;
    result = v200BC92;
  }
  else
  {
    result = 0;
  }
  return result;
}
