int sub_80AAF30()
{
  signed int v0; // r4@1
  signed int v1; // r4@3
  _WORD *v2; // r7@3
  signed int v3; // r5@3
  int v5; // [sp+1Ch] [bp-4h]@0

  v203856C = 1;
  v2038695 = 3;
  sub_80AE098(0);
  v0 = 3;
  do
  {
    *(_BYTE *)(v0 + 33785488) = 3 - v0;
    --v0;
  }
  while ( v0 > -1 );
  v1 = 0;
  v2 = (_WORD *)33785456;
  v3 = 33785200;
  do
  {
    *v2 = 0;
    *(_WORD *)(2 * v1 + 0x2038680) = 0;
    *(_WORD *)(2 * v1 + 0x2038678) = 0;
    memcpy(v3, 33785392, 64);
    ++v2;
    v3 += 64;
    ++v1;
  }
  while ( v1 <= 2 );
  v2038676 = 300;
  v2038686 = 400;
  v203867E = 400;
  sub_80B2A7C(254);
  return v5;
}
