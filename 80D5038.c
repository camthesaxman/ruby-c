int __fastcall sub_80D5038(int a1)
{
  int v1; // r2@1
  __int16 v2; // r0@1
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46) + 1;
  *(_WORD *)(v1 + 46) = v2;
  if ( v2 < (signed int)*(_WORD *)(v1 + 54) )
  {
    *(_WORD *)(v1 + 36) += *(_WORD *)(v1 + 50);
    *(_WORD *)(v1 + 38) += *(_WORD *)(v1 + 52);
  }
  if ( *(_WORD *)(v1 + 46) == *(_WORD *)(v1 + 48) )
    move_anim_8074EE0(v1);
  return v4;
}
