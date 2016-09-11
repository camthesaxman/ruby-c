signed int sub_80F1F10()
{
  unsigned int v0; // r6@5
  int v1; // r4@6

  if ( v200030F )
  {
    if ( v200030F == 1 && sub_80F23C8() << 24 )
    {
      sub_80F21F8();
      FreeSpriteTilesByTag(0);
      FreeSpritePaletteByTag(0);
      FreeSpritePaletteByTag(1u);
      return 0;
    }
  }
  else if ( sub_80F2360() << 24 )
  {
    v0 = 0;
    do
    {
      v1 = *(_DWORD *)(4 * v0 + 16 * v2006DAD + 0x2000320);
      *(_BYTE *)(v1 + 1) |= 3u;
      *(_DWORD *)(v1 + 16) = &gUnknown_083E4450;
      InitSpriteAffineAnim(v1);
      *(_WORD *)(v1 + 54) = 4 * v0 - 6;
      *(_WORD *)(v1 + 54) /= 2;
      *(_WORD *)(v1 + 56) = 8 * *(_WORD *)(v1 + 54);
      *(_DWORD *)(v1 + 28) = sub_80F2240;
      v0 = (v0 + 1) & 0xFFFF;
    }
    while ( v0 <= 3 );
    sub_80F2170();
    ++v200030F;
  }
  return 1;
}
