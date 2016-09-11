int __fastcall sub_810506C(int a1)
{
  int v1; // r4@1
  unsigned int v2; // r2@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = v200000C;
  if ( *(_WORD *)(a1 + 46) )
    v2 = v200000E;
  if ( *(_WORD *)(a1 + 52) != v2 )
  {
    *(_WORD *)(a1 + 52) = v2;
    *(_WORD *)(a1 + 64) = GetSpriteTileStartByTag((((v2 % *(_WORD *)(a1 + 50) & 0xFFFF) / *(_WORD *)(a1 + 48) << 16)
                                                 + 458752) >> 16);
    SetSpriteSheetFrameTileNum(v1);
  }
  return v4;
}
