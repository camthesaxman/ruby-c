int __fastcall sub_80D541C(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 36) = sine(*(_WORD *)(a1 + 48), *(_WORD *)(a1 + 50) << 16 >> 24);
  *(_WORD *)(v1 + 38) = cosine(*(_WORD *)(v1 + 48), *(_WORD *)(v1 + 50) << 16 >> 24);
  *(_WORD *)(v1 + 48) = (*(_WORD *)(v1 + 48) + 10) & 0xFF;
  *(_WORD *)(v1 + 50) += 208;
  v2 = *(_WORD *)(v1 + 46) - 1;
  *(_WORD *)(v1 + 46) = v2;
  if ( v2 == -1 )
    move_anim_8072740(v1);
  return v4;
}
