int __fastcall sub_811BA70(int a1)
{
  int v1; // r8@1
  __int16 *v2; // r5@2
  __int16 v3; // r1@2
  signed int v4; // r2@2
  int v5; // r1@4
  int v6; // r0@9
  char v8; // [sp+Ch] [bp-24h]@1

  v1 = a1;
  v8 = 0;
  v200C000 = 0;
  sub_811D8FC(33603620, 120, 80, 0);
  while ( 1 )
  {
    v2 = &word_3004DE0[v200C02A];
    v3 = *(_BYTE *)v2;
    v4 = v200C028;
    if ( v200C02E <= 80 )
    {
      v4 = 120;
      v3 = v200C028;
    }
    v5 = v3 | (v4 << 16 >> 8);
    *v2 = v5;
    if ( v8 )
      break;
    v8 = sub_811D978(33603620, 1, 1);
  }
  v200C02E -= 8;
  if ( v200C02E > 0 )
  {
    for ( ; v200C02A > v200C02E; *(__int16 *)((char *)word_3004DE0 + (v6 << 16 >> 15)) = v5 )
    {
      v6 = v200C02A - 1;
      --v200C02A;
    }
  }
  else
  {
    v200C02C = 0;
    ++*(_WORD *)(v1 + 8);
  }
  ++v200C000;
  return 0;
}
