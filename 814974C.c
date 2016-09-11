int __fastcall sub_814974C(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( (signed int)*(_WORD *)(a1 + 56) <= 8 )
  {
    DestroySprite(a1);
  }
  else
  {
    *(_WORD *)(a1 + 38) = sine(*(_WORD *)(a1 + 58) & 0xFF, *(_WORD *)(a1 + 56));
    *(_WORD *)(v1 + 36) = cosine(*(_WORD *)(v1 + 58) & 0xFF, *(_WORD *)(v1 + 56));
    *(_WORD *)(v1 + 56) -= *(_WORD *)(v1 + 52);
    *(_WORD *)(v1 + 58) += 4;
  }
  return v3;
}
