int __fastcall sub_812CD64(int a1)
{
  __int16 v1; // r1@1
  int v3; // [sp+0h] [bp-4h]@0

  *(_WORD *)(a1 + 48) = (*(_WORD *)(a1 + 50) + *(_WORD *)(a1 + 48)) & 0xFF;
  *(_WORD *)(a1 + 36) = gSineTable[*(_WORD *)(a1 + 48)] << 16 >> 20;
  v1 = *(_WORD *)(a1 + 52) + *(_WORD *)(a1 + 38);
  *(_WORD *)(a1 + 38) = v1;
  if ( *(_WORD *)(a1 + 46) )
  {
    if ( v1 < (signed int)*(_WORD *)(a1 + 54) )
      move_anim_8072740(a1);
  }
  else if ( v1 > (signed int)*(_WORD *)(a1 + 54) )
  {
    move_anim_8072740(a1);
  }
  return v3;
}
