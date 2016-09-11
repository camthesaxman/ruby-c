int sub_8109C58()
{
  unsigned int v0; // r4@1
  int v2; // [sp+8h] [bp-4h]@0

  v0 = 0;
  do
  {
    if ( sub_8134194(v0) << 24 )
    {
      v202E8DC = 0;
      return v2;
    }
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 7 );
  v202E8DC = 1;
  return v2;
}
