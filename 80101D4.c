int c2_081284E0()
{
  int v1; // [sp+8h] [bp-4h]@0

  if ( v2024D1E == 1 )
  {
    if ( !--v2024D1F )
    {
      BeginNormalPaletteFade(-1, 0, 0, 16);
_0801021A:
      ++v2024D1E;
      return v1;
    }
  }
  else
  {
    if ( (signed int)v2024D1E <= 1 )
    {
      if ( v2024D1E )
        return v1;
      v2024D1F = -1;
      goto _0801021A;
    }
    if ( v2024D1E == 2 && !(v202F38F & 0x80) )
      SetMainCallback2(dword_3001778);
  }
  return v1;
}
