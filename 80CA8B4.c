int __fastcall sub_80CA8B4(int a1)
{
  int v1; // r4@1
  char v2; // r0@4
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( sub_8078B5C(a1) << 24 )
  {
    DestroySprite(v1);
  }
  else
  {
    if ( (signed int)*(_WORD *)(v1 + 56) <= 127 )
      v2 = sub_8079E90(v202F7C9) + 6;
    else
      v2 = sub_8079E90(v202F7C9) + 1;
    *(_BYTE *)(v1 + 67) = v2;
    *(_WORD *)(v1 + 36) += sine(*(_WORD *)(v1 + 56), 5);
    *(_WORD *)(v1 + 38) += cosine(*(_WORD *)(v1 + 56), 14);
    *(_WORD *)(v1 + 56) = (*(_WORD *)(v1 + 56) + 15) & 0xFF;
  }
  return v4;
}
