int FreeAllSpritePalettes()
{
  unsigned int v0; // r2@1
  __int16 *v1; // r0@2
  int v2; // r1@2
  int v4; // [sp+4h] [bp-4h]@0

  gReservedSpritePaletteCount = 0;
  v0 = 0;
  do
  {
    v1 = &sSpritePaletteTags[v0];
    v2 = (unsigned __int16)*v1 | 0xFFFF;
    *v1 = -1;
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 0xF );
  return v4;
}
