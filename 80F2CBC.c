signed int __fastcall sub_80F2CBC(unsigned __int8 a1)
{
  signed int result; // r0@4

  if ( v2000306 )
  {
    if ( v2000306 == 1 )
    {
      sub_80F29B8(a1);
      ++v2000306;
    }
    result = 0;
  }
  else
  {
    sub_80F27DC(a1);
    ++v2000306;
    result = 1;
  }
  return result;
}
