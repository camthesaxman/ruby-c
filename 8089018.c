int __fastcall sub_8089018(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !*(_WORD *)(a1 + 60) )
  {
    if ( !*(_WORD *)(a1 + 46) )
    {
      *(_BYTE *)(a1 + 1) |= 3u;
      *(_DWORD *)(a1 + 16) = &gUnknown_0839F44C;
      InitSpriteAffineAnim(a1);
      StartSpriteAffineAnim(v1, 0);
      *(_WORD *)(v1 + 32) = 118;
      *(_WORD *)(v1 + 34) = -48;
      ++*(_WORD *)(v1 + 46);
      *(_WORD *)(v1 + 48) = 64;
      *(_WORD *)(v1 + 50) = 256;
    }
    *(_WORD *)(v1 + 48) += *(_WORD *)(v1 + 50) << 16 >> 24;
    *(_WORD *)(v1 + 36) = cosine(*(_WORD *)(v1 + 48), 120);
    *(_WORD *)(v1 + 38) = sine(*(_WORD *)(v1 + 48), 120);
    if ( (signed int)*(_WORD *)(v1 + 50) <= 2047 )
      *(_WORD *)(v1 + 50) += 96;
    if ( (signed int)*(_WORD *)(v1 + 48) > 129 )
    {
      ++*(_WORD *)(v1 + 60);
      *(_BYTE *)(v1 + 1) &= 0xFCu;
      FreeOamMatrix((unsigned int)*(_BYTE *)(v1 + 3) << 26 >> 27);
      CalcCenterToCornerVec(v1, (unsigned int)*(_BYTE *)(v1 + 1) >> 6, (unsigned int)*(_BYTE *)(v1 + 3) >> 6, 0);
    }
  }
  return v3;
}
