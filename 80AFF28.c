_BOOL4 sub_80AFF28()
{
  signed int v0; // r3@1
  signed int v1; // r2@1

  v0 = 0;
  v1 = 33657656;
  if ( !(v201933A & 1) )
  {
    do
    {
      v1 += 4;
      ++v0;
    }
    while ( v0 <= 3 && !(*(_BYTE *)(v1 + 2) & 1) );
  }
  return v0 == 4;
}
