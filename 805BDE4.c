int gpu_pal_allocator_reset__manage_upper_four()
{
  int v1; // [sp+0h] [bp-4h]@0

  FreeAllSpritePalettes();
  gReservedSpritePaletteCount = 12;
  return v1;
}
