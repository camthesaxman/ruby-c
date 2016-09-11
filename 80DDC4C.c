int __fastcall sub_80DDC4C(int a1)
{
  int v1; // r4@1
  __int16 v2; // r2@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 46) = 1;
  sub_8078B5C(a1);
  *(_WORD *)(v1 + 36) += sine(*(_WORD *)(v1 + 56), 10);
  *(_WORD *)(v1 + 38) += cosine(*(_WORD *)(v1 + 56), 15);
  v2 = *(_WORD *)(v1 + 56);
  *(_WORD *)(v1 + 56) = (v2 + 5) & 0xFF;
  if ( (!v2 || v2 > 196) && *(_WORD *)(v1 + 56) << 16 > 0 )
    audio_play(0xC4u);
  if ( *(_WORD *)(v1 + 58) )
  {
    sub_80DDCC8(v1);
  }
  else
  {
    *(_BYTE *)(v1 + 62) |= 4u;
    *(_DWORD *)(v1 + 28) = sub_807861C;
  }
  return v4;
}
