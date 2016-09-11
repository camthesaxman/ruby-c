int __fastcall DestroySprite(int a1)
{
  unsigned int v1; // r4@3
  unsigned int i; // r3@3
  int v4; // [sp+10h] [bp-4h]@0

  if ( *(_BYTE *)(a1 + 62) & 1 )
  {
    if ( !(*(_BYTE *)(a1 + 63) & 0x40) )
    {
      v1 = (*(_WORD *)(a1 + 4) & 0x3FF) + ((unsigned int)*(_WORD *)(*(_DWORD *)(a1 + 12) + 4) >> 5);
      for ( i = *(_WORD *)(a1 + 4) & 0x3FF; i < v1; i = (i + 1) & 0xFFFF )
        gSpriteTileAllocBitmap[i >> 3] &= ~(unsigned __int8)(1 << (i & 7));
    }
    ResetSprite(a1);
  }
  return v4;
}
