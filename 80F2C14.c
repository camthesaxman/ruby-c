int __fastcall sub_80F2C14(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 32) - *(_WORD *)(a1 + 46);
  *(_WORD *)(v1 + 32) = v2;
  if ( (unsigned int)((v2 + 32) << 16) > 0x1300000 )
  {
    if ( *(_WORD *)(v1 + 50) == 1 )
    {
      if ( (signed int)*(_WORD *)(v1 + 52) > 4 )
        FreeSpriteTilesByTag(2u);
      else
        FreeSpriteTilesByTag(1u);
    }
    DestroySprite(v1);
  }
  return v4;
}
