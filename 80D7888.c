int __fastcall sub_80D7888(int a1)
{
  int v1; // r4@1
  __int16 v2; // r1@2
  __int16 v3; // r0@2
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 46) )
  {
    v2 = *(_WORD *)(a1 + 48) + *(_WORD *)(a1 + 56);
    *(_WORD *)(a1 + 56) = v2;
    v3 = *(_WORD *)(a1 + 50) + *(_WORD *)(a1 + 58);
    *(_WORD *)(v1 + 58) = v3;
    *(_WORD *)(v1 + 36) = v2;
    *(_WORD *)(v1 + 38) = v3;
    *(_WORD *)(v1 + 36) += sine(*(_WORD *)(v1 + 60), *(_WORD *)(v1 + 52));
    *(_WORD *)(v1 + 38) += sine(*(_WORD *)(v1 + 60), *(_WORD *)(v1 + 52));
    *(_WORD *)(v1 + 60) = (*(_WORD *)(v1 + 54) + *(_WORD *)(v1 + 60)) & 0xFF;
    --*(_WORD *)(v1 + 46);
  }
  else
  {
    move_anim_8072740(a1);
  }
  return v5;
}
