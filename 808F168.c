int __fastcall sub_808F168(int a1)
{
  int v1; // r4@4
  signed int v2; // r1@4
  int v3; // r2@8
  int v5; // [sp+4h] [bp-4h]@0

  if ( *(_BYTE *)(v202FFB4 + 1610) && *(_BYTE *)(v202FFB4 + 1610) != 3 )
  {
    DestroySprite(a1);
  }
  else
  {
    v1 = v202FFB4;
    v2 = 96;
    if ( !*(_BYTE *)(v202FFB4 + 1610) )
      v2 = 80;
    if ( *(_BYTE *)(v202FFB4 + 1616) && *(_WORD *)(v202FFB4 + 1620) == v2 )
    {
      *(_BYTE *)(a1 + 62) &= 0xFBu;
      *(_WORD *)(a1 + 38) = 16 * *(_WORD *)(v1 + 1618);
      v3 = *(_WORD *)(a1 + 50);
      *(_WORD *)(a1 + 36) = *(_WORD *)((char *)gSineTable + (2 * v3 & 0x1FF)) / 64;
      *(_WORD *)(a1 + 50) = v3 + 8;
    }
    else
    {
      *(_BYTE *)(a1 + 62) |= 4u;
    }
  }
  return v5;
}
