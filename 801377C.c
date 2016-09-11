int sub_801377C()
{
  int v0; // r2@2
  unsigned int v1; // r1@2
  int v3; // [sp+Ch] [bp-4h]@0

  v2024A60 = 0;
  if ( v2024A68 )
  {
    do
    {
      v0 = 20 * v2024A60 + 33705320;
      v1 = 0;
      do
        *(_BYTE *)(v0 + v1++) = 0;
      while ( v1 <= 0x13 );
      ++v2024A60;
    }
    while ( v2024A60 < (unsigned int)v2024A68 );
  }
  return v3;
}
