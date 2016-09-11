int ResetAllSprites()
{
  unsigned int v0; // r4@1
  int v1; // r0@3
  int v3; // [sp+8h] [bp-4h]@0

  v0 = 0;
  do
  {
    ResetSprite();
    gSpriteOrder[v0] = v0;
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 0x3F );
  v1 = ResetSprite();
  sub_814A590(v1);
  return v3;
}
