int __fastcall sub_811BB60(int a1)
{
  int v1; // r6@1
  signed __int16 v2; // r2@2
  signed __int16 v3; // r3@2

  v1 = a1;
  v200C000 = 0;
  sub_811D8FC(33603620, 120, 80, v200C02C);
  do
  {
    v2 = 120;
    v3 = v200C028;
    if ( v200C028 > 119 )
    {
      v2 = 0;
      v3 = 240;
    }
    word_3004DE0[v200C02A] = v3 | (v2 << 8);
  }
  while ( !(sub_811D978(33603620, 1, 1) << 24) );
  v200C02C += 16;
  if ( v200C028 > 120 )
    ++*(_WORD *)(v1 + 8);
  ++v200C000;
  return 0;
}
