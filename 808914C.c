int __fastcall sub_808914C(int a1)
{
  int v1; // r4@1
  int v2; // r1@4
  __int16 v3; // r2@4
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !*(_WORD *)(a1 + 60) )
  {
    if ( !*(_WORD *)(a1 + 46) )
    {
      *(_BYTE *)(a1 + 1) |= 3u;
      *(_DWORD *)(a1 + 16) = &gUnknown_0839F44C;
      InitSpriteAffineAnim(a1);
      StartSpriteAffineAnim(v1, 1);
      *(_WORD *)(v1 + 32) = 94;
      *(_WORD *)(v1 + 34) = -32;
      ++*(_WORD *)(v1 + 46);
      *(_WORD *)(v1 + 48) = 240;
      *(_WORD *)(v1 + 50) = 2048;
      *(_WORD *)(v1 + 54) = 128;
    }
    v2 = *(_WORD *)(v1 + 50) << 16 >> 24;
    v3 = *(_WORD *)(v1 + 48) + v2;
    *(_WORD *)(v1 + 52) += v2;
    *(_WORD *)(v1 + 48) = (unsigned __int8)v3;
    *(_WORD *)(v1 + 36) = cosine(*(_WORD *)(v1 + 48), 32);
    *(_WORD *)(v1 + 38) = sine(*(_WORD *)(v1 + 48), 120);
    if ( (signed int)*(_WORD *)(v1 + 50) > 256 )
      *(_WORD *)(v1 + 50) -= *(_WORD *)(v1 + 54);
    if ( (signed int)*(_WORD *)(v1 + 54) <= 255 )
      *(_WORD *)(v1 + 54) += 24;
    if ( (signed int)*(_WORD *)(v1 + 50) <= 255 )
      *(_WORD *)(v1 + 50) = 256;
    if ( (signed int)*(_WORD *)(v1 + 52) > 59 )
    {
      ++*(_WORD *)(v1 + 60);
      *(_BYTE *)(v1 + 1) &= 0xFCu;
      FreeOamMatrix((unsigned int)*(_BYTE *)(v1 + 3) << 26 >> 27);
      *(_BYTE *)(v1 + 62) |= 4u;
    }
  }
  return v5;
}
