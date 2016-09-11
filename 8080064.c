int sub_8080064()
{
  int v1; // [sp+Ch] [bp-4h]@0

  v202FEEC -= 4 * gSineTable[v202FEFA];
  v202FEF0 -= gSineTable[v202FEFA];
  v202FEF6 = ((v202FEEC >> 8) + gSpriteCoordOffsetX) & 0xFF;
  v202FEF8 = (v202FEF0 >> 8) + gSpriteCoordOffsetY;
  return v1;
}
