int __fastcall sub_80D2938(int a1)
{
  int v1; // r4@1
  int v2; // r5@3
  signed int v3; // r2@5
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( !*(_WORD *)(a1 + 46) )
  {
    *(_WORD *)(a1 + 32) += word_3004B00[0];
    *(_WORD *)(a1 + 34) += word_3004B02;
  }
  v2 = 10 * ++*(_WORD *)(a1 + 46) & 0xFF;
  *(_WORD *)(a1 + 36) = sine(v2, 80) << 16 >> 24;
  if ( (signed int)*(_WORD *)(v1 + 46) <= 79 )
    *(_WORD *)(v1 + 38) = *(_WORD *)(v1 + 46) / 2 + (cosine(v2, 80) << 16 >> 24);
  v3 = *(_WORD *)(v1 + 46);
  if ( v3 > 90 )
    *(_WORD *)(v1 + 36) -= ++*(_WORD *)(v1 + 50) / 2;
  if ( v3 > 100 )
    move_anim_8072740(v1);
  return v5;
}
