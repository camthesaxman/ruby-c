signed int sub_80F6ED4()
{
  __int16 v0; // r3@1

  v0 = v200D15A;
  if ( v200D15A != -72 )
  {
    v200D15A -= 8;
    if ( (signed __int16)(v0 - 8) > -72 )
      return 1;
    v200D15A = -72;
  }
  return 0;
}
