int __fastcall sub_80DFBD8(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 54) += *(_WORD *)(a1 + 48);
  *(_WORD *)(v1 + 56) += *(_WORD *)(a1 + 50);
  *(_WORD *)(a1 + 36) = *(_WORD *)(a1 + 54) / 10;
  *(_WORD *)(a1 + 38) = *(_WORD *)(a1 + 56) / 10;
  v2 = *(_WORD *)(a1 + 46) + 1;
  *(_WORD *)(v1 + 46) = v2;
  if ( v2 > (signed int)*(_WORD *)(v1 + 52) )
    move_anim_8072740(v1);
  return v4;
}
