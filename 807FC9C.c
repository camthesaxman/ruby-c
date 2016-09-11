int sub_807FC9C()
{
  int v1; // [sp+8h] [bp-4h]@0

  ++v202FF04;
  if ( v202FF04 > 2u )
  {
    ++v202FF08;
    v202FF04 = 0;
  }
  ++v202FF06;
  if ( v202FF06 > 4u )
  {
    ++v202FF0A;
    v202FF06 = 0;
  }
  v202FF00 = (gSpriteCoordOffsetX - v202FF08) & 0xFF;
  v202FF02 = v202FF0A + gSpriteCoordOffsetY;
  return v1;
}
