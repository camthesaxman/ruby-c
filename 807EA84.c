int snowflakes_progress2()
{
  int v1; // [sp+8h] [bp-4h]@0

  if ( !v202FEB4 && !(snowflakes_progress() << 24) )
  {
    v202FEBA = 1;
    ++v202FEB4;
  }
  return v1;
}
