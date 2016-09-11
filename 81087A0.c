int tai30_unk()
{
  signed int v0; // r5@1
  int v2; // [sp+14h] [bp-4h]@0

  v2024DEC = 0;
  v201601C = 0;
  v201601F = 1;
  v2024C68 = 0;
  v2024C0D = 1;
  v2016808 = 0;
  v0 = 0;
  do
  {
    v2024BEC = 40;
    v2024BE6 = *(_WORD *)(2 * v0 + 88 * v2024C07 + 0x2024A8C);
    if ( v2024BE6 << 16 )
    {
      move_effectiveness_something(v2024BE6, v2024C07, v2024C08);
      if ( v2024BEC == 120 )
        v2024BEC = 80;
      if ( v2024BEC == 240 )
        v2024BEC = 160;
      if ( v2024BEC == 30 )
        v2024BEC = 20;
      if ( v2024BEC == 15 )
        v2024BEC = 10;
      if ( v2024C68 & 8 )
        v2024BEC = 0;
      if ( v2016808 < v2024BEC )
        v2016808 = v2024BEC;
    }
    ++v0;
  }
  while ( v0 <= 3 );
  ++v2039238;
  return v2;
}
