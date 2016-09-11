int atk12_waitmessage()
{
  unsigned int v0; // r1@4
  int v2; // [sp+Ch] [bp-4h]@0

  if ( !v2024A64 )
  {
    if ( v2024D25 )
    {
      v0 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8);
      ++v2024D18;
      if ( v2024D18 >= v0 )
      {
        v2024D18 = v2024A64;
        v2024C10 += 3;
        v2024D25 = 0;
      }
    }
    else
    {
      v2024C10 += 3;
    }
  }
  return v2;
}
