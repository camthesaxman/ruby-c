int sub_810DC7C()
{
  unsigned int v0; // r4@1
  int v2; // [sp+8h] [bp-4h]@0

  v0 = 0;
  do
  {
    if ( v0 == v202E8CC )
      MapGridSetMetatileIdAt(
        (unsigned __int8)gUnknown_083F8364[4 * v0],
        (unsigned __int8)gUnknown_083F8364[4 * v0 + 1],
        518);
    else
      MapGridSetMetatileIdAt(
        (unsigned __int8)gUnknown_083F8364[4 * v0],
        (unsigned __int8)gUnknown_083F8364[4 * v0 + 1],
        517);
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 2 );
  return v2;
}
