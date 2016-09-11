int PlayTimeCounter_Update()
{
  int v0; // r0@5
  int v2; // [sp+0h] [bp-4h]@0

  if ( byte_300057C == 1 )
  {
    ++v2024EB6;
    if ( v2024EB6 > 0x3Bu )
    {
      v2024EB6 = 0;
      ++v2024EB5;
      if ( v2024EB5 > 0x3Bu )
      {
        v2024EB5 = 0;
        ++v2024EB4;
        if ( v2024EB4 > 0x3Bu )
        {
          v2024EB4 = 0;
          v0 = v2024EB2 + 1;
          ++v2024EB2;
          if ( (unsigned int)(v0 << 16) > 0x3E70000 )
            PlayTimeCounter_SetToMax();
        }
      }
    }
  }
  return v2;
}
