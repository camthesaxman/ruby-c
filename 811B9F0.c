int __fastcall sub_811B9F0(int a1)
{
  int v1; // r6@1
  int v2; // r0@3

  v1 = a1;
  v200C000 = 0;
  sub_811D8FC(33603620, 120, 80, v200C02C);
  do
    word_3004DE0[v200C02A] = (v200C028 << 8) | 0xF0;
  while ( !(sub_811D978(33603620, 1, 1) << 24) );
  v2 = v200C02C - 16;
  v200C02C -= 16;
  if ( v2 << 16 <= 0 )
  {
    v200C02E = 160;
    ++*(_WORD *)(v1 + 8);
  }
  ++v200C000;
  return 0;
}
