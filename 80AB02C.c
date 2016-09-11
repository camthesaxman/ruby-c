signed int sub_80AB02C()
{
  signed int v0; // r2@1

  v2038695 = 3;
  sub_80AE098(0);
  v0 = 3;
  do
  {
    *(_BYTE *)(v0 + 33785488) = 3 - v0;
    --v0;
  }
  while ( v0 > -1 );
  v203869C = 0;
  do
  {
    sub_80B2A7C(255);
    ++v203869C;
  }
  while ( v203869C <= 4u );
  sub_8071C20();
  return 1;
}
