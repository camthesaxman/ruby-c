int __fastcall sub_80CED78(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v3; // r1@1
  __int16 v4; // r0@5
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 58) + *(_WORD *)(a1 + 54);
  *(_WORD *)(v1 + 54) = v2;
  v3 = *(_WORD *)(v1 + 60) + *(_WORD *)(v1 + 56);
  *(_WORD *)(v1 + 56) = v3;
  *(_WORD *)(v1 + 32) = v2 << 16 >> 20;
  *(_WORD *)(v1 + 34) = v3 << 16 >> 20;
  if ( (signed int)*(_WORD *)(v1 + 46) > 5 && !*(_WORD *)(v1 + 52) )
  {
    *(_WORD *)(v1 + 50) = (*(_WORD *)(v1 + 50) + 16) & 0xFF;
    *(_WORD *)(v1 + 36) = cosine(*(_WORD *)(v1 + 50), 18);
    *(_WORD *)(v1 + 38) = sine(*(_WORD *)(v1 + 50), 18);
    if ( !*(_WORD *)(v1 + 50) )
      *(_WORD *)(v1 + 52) = 1;
  }
  v4 = *(_WORD *)(v1 + 46) + 1;
  *(_WORD *)(v1 + 46) = v4;
  if ( v4 == 48 )
    move_anim_8074EE0(v1);
  return v6;
}
