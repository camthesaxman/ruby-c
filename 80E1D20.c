int __fastcall sub_80E1D20(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@4
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 36) = cosine(*(_WORD *)(a1 + 46), 30);
  *(_WORD *)(v1 + 38) = sine(*(_WORD *)(v1 + 46), 10);
  if ( (unsigned int)*(_WORD *)(v1 + 46) > 0x7F )
    *(_BYTE *)(v1 + 5) |= 0xCu;
  else
    *(_BYTE *)(v1 + 5) = *(_BYTE *)(v1 + 5) & 0xF3 | 4;
  *(_WORD *)(v1 + 46) = (*(_WORD *)(v1 + 48) + *(_WORD *)(v1 + 46)) & 0xFF;
  v2 = *(_WORD *)(v1 + 50) + 1;
  *(_WORD *)(v1 + 50) = v2;
  if ( v2 == *(_WORD *)(v1 + 52) )
    move_anim_8072740(v1);
  return v4;
}
