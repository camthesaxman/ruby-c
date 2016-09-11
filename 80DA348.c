int __fastcall sub_80DA348(int a1)
{
  int v1; // r2@1
  int v2; // r0@3
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  if ( (signed int)*(_WORD *)(a1 + 46) <= 0 )
  {
    v2 = *(_WORD *)(a1 + 48) + *(_WORD *)(a1 + 50);
    *(_WORD *)(v1 + 50) = v2;
    *(_WORD *)(v1 + 38) -= v2 << 16 >> 24;
  }
  else
  {
    --*(_WORD *)(a1 + 46);
  }
  if ( *(_WORD *)(v1 + 34) + (signed int)*(_WORD *)(v1 + 38) < -32 )
    move_anim_8072740(v1);
  return v4;
}
