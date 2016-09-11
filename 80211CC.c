int atk39_pause()
{
  unsigned int v0; // r1@2
  int v2; // [sp+8h] [bp-4h]@0

  if ( !v2024A64 )
  {
    v0 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8);
    ++v2024D18;
    if ( v2024D18 >= v0 )
    {
      v2024D18 = v2024A64;
      v2024C10 += 3;
    }
  }
  return v2;
}
