int __fastcall sub_80CAACC(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@4
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( sub_8078CE8(a1) << 24 )
  {
    move_anim_8072740(v1);
  }
  else
  {
    *(_WORD *)(v1 + 38) += cosine(*(_WORD *)(v1 + 56), 12);
    if ( (signed int)*(_WORD *)(v1 + 56) > 126 )
      LOBYTE(v2) = *(_WORD *)(v1 + 58) + 1;
    else
      v2 = *(_WORD *)(v1 + 58);
    *(_BYTE *)(v1 + 67) = v2;
    *(_WORD *)(v1 + 56) = (*(_WORD *)(v1 + 56) + 24) & 0xFF;
  }
  return v4;
}
