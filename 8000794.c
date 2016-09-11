int AnimateSprites()
{
  unsigned int v0; // r6@1
  char *v1; // r5@2
  int v3; // [sp+10h] [bp-4h]@0

  v0 = 0;
  do
  {
    v1 = &gSprites[68 * v0 + 62];
    if ( *v1 & 1 )
    {
      call_via_r1(&gSprites[68 * v0], *(_DWORD *)&gSprites[68 * v0 + 28]);
      if ( *v1 & 1 )
        AnimateSprite(&gSprites[68 * v0]);
    }
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 0x3F );
  return v3;
}
