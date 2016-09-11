int BuildSpritePriorities()
{
  unsigned int v0; // r2@1
  int v2; // [sp+4h] [bp-4h]@0

  v0 = 0;
  do
  {
    gSpritePriorities[v0] = (unsigned __int8)gSprites[68 * v0 + 67] | (unsigned __int16)((unsigned int)(unsigned __int8)gSprites[68 * v0 + 5] << 28 >> 30 << 8);
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 0x3F );
  return v2;
}
