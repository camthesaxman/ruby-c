int sub_810745C()
{
  int v0; // r2@1
  int v2; // [sp+Ch] [bp-4h]@0

  v0 = 0;
  while ( *(_WORD *)(2 * v0 + 16 * ((unsigned int)v2024C08 >> 1) + 0x2016A00) )
  {
    if ( ++v0 > 7 )
      return v2;
  }
  *(_WORD *)(2 * v0 + 16 * ((unsigned int)v2024C08 >> 1) + 0x2016A00) = *(_WORD *)(2 * v2024C08 + 0x2024C34);
  return v2;
}
