int sub_807F52C()
{
  int v1; // [sp+Ch] [bp-4h]@0

  v202FED6 = (gSpriteCoordOffsetX - v202FEDA) & 0xFF;
  ++v202FED8;
  if ( v202FED8 > 3u )
  {
    v202FED8 = 0;
    ++v202FEDA;
  }
  if ( v202FEB4 )
  {
    if ( v202FEB4 == 1 && sub_807DBE8() << 24 )
    {
      v202FEBA = 1;
      ++v202FEB4;
    }
  }
  else
  {
    sub_807F6E8();
    if ( v202FEB8 == 6 )
      sub_807DBA4(0xCu, 8u, 3);
    else
      sub_807DBA4(4u, 0x10u, 0);
    ++v202FEB4;
  }
  return v1;
}
