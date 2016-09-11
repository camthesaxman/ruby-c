signed int sub_80AAFEC()
{
  _WORD *v0; // r3@1
  _WORD *v1; // r2@1
  _WORD *v2; // r1@1
  signed int v3; // r0@1

  v203856C = 0;
  v0 = (_WORD *)33785464;
  v1 = (_WORD *)33785472;
  v2 = (_WORD *)33785456;
  v3 = 3;
  do
  {
    *v2 = 0;
    *v1 = 0;
    *v0 = 0;
    ++v0;
    ++v1;
    ++v2;
    --v3;
  }
  while ( v3 >= 0 );
  sub_8071C20();
  return 1;
}
