int __fastcall sub_811B90C(int a1)
{
  int v1; // r7@1
  signed int v2; // r1@2
  int v3; // r3@2
  int v4; // r3@4
  int v5; // r0@9
  char v7; // [sp+Ch] [bp-1Ch]@1

  v1 = a1;
  v7 = 0;
  v200C000 = 0;
  sub_811D8FC(33603620, 120, 80, 240);
  while ( 1 )
  {
    v2 = 120;
    v3 = (v200C028 + 1) & 0xFFFF;
    if ( v200C02E > 79 )
    {
      v2 = v200C028;
      LOWORD(v3) = 240;
    }
    v4 = (signed __int16)v3 | (v2 << 16 >> 8);
    word_3004DE0[v200C02A] = v4;
    if ( v7 )
      break;
    v7 = sub_811D978(33603620, 1, 1);
  }
  v200C02E += 8;
  if ( v200C02E <= 159 )
  {
    for ( ; v200C02A < v200C02E; *(__int16 *)((char *)word_3004DE0 + (v5 << 16 >> 15)) = v4 )
    {
      v5 = v200C02A + 1;
      ++v200C02A;
    }
  }
  else
  {
    v200C02C = 240;
    ++*(_WORD *)(v1 + 8);
  }
  ++v200C000;
  return 0;
}
