int sub_80C4D50()
{
  int v0; // r3@1
  _WORD *v1; // r2@1
  signed int v2; // r1@1

  v0 = 0;
  v1 = (_WORD *)33719864;
  v2 = 4;
  do
  {
    if ( *v1 )
      v0 = (v0 + 1) & 0xFF;
    v1 += 16;
    --v2;
  }
  while ( v2 >= 0 );
  return v0;
}
