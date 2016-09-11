int __fastcall sub_80CC580(int a1)
{
  __int16 v1; // r3@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = (*(_WORD *)(a1 + 60))++;
  *(_WORD *)(a1 + 38) = gSineTable[*(_WORD *)(a1 + 46)] * (signed int)*(_WORD *)(a1 + 48) >> 8;
  *(_WORD *)(a1 + 36) = *(_WORD *)(a1 + 50) * v1;
  *(_WORD *)(a1 + 46) = *(_WORD *)(a1 + 52) * v1 & 0xFF;
  if ( *(_WORD *)(a1 + 54) )
  {
    if ( *(_WORD *)(a1 + 36) + (signed int)*(_WORD *)(a1 + 32) <= -16 )
    {
_080CC5EA:
      move_anim_8074EE0(a1);
      return v3;
    }
  }
  else if ( *(_WORD *)(a1 + 36) + (signed int)*(_WORD *)(a1 + 32) > 247 )
  {
    goto _080CC5EA;
  }
  return v3;
}
