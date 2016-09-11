int pal_fill_black()
{
  int v1; // [sp+0h] [bp-4h]@0

  fade_screen(0, 0);
  palette_bg_faded_fill_white();
  return v1;
}
