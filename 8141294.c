int __fastcall sub_8141294(int a1)
{
  int v1; // r5@1
  int v2; // r0@5
  signed int v3; // r7@6
  void **v4; // r6@6
  void **v5; // r4@6
  int v7; // [sp+10h] [bp-4h]@0

  v1 = a1;
  if ( byte_3001BAD & 2 )
  {
    if ( *(_WORD *)(a1 + 60) != 1 )
    {
      DestroySprite(a1);
      return v7;
    }
    v2 = v201784A - 1;
    --v201784A;
    if ( !(v2 << 24) )
    {
      v3 = 0;
      v4 = &gUnknown_0840B258;
      v5 = &gUnknown_0840B2B8;
      do
      {
        FreeSpriteTilesByTag(*((_WORD *)v4 + 3));
        FreeSpritePaletteByTag(*((_WORD *)v5 + 2));
        v4 += 2;
        v5 += 2;
        ++v3;
      }
      while ( v3 <= 11 );
    }
    goto _081412F2;
  }
  if ( *(_WORD *)(a1 + 60) != 1 )
  {
_081412F2:
    DestroySprite(v1);
    return v7;
  }
  DestroySpriteAndFreeResources(a1);
  return v7;
}
