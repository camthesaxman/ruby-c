int __fastcall sub_80CA768(int a1)
{
  int v1; // r4@1
  int v2; // r1@2
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( (signed int)*(_WORD *)(a1 + 46) <= 0 )
  {
    move_anim_8072740(a1);
  }
  else
  {
    --*(_WORD *)(a1 + 46);
    v2 = *(_WORD *)(a1 + 50);
    *(_WORD *)(a1 + 38) = v2 << 16 >> 24;
    *(_WORD *)(a1 + 50) = v2 + *(_WORD *)(a1 + 48);
    *(_WORD *)(a1 + 36) = sine(*(_WORD *)(a1 + 56), *(_WORD *)(a1 + 52));
    *(_WORD *)(v1 + 56) = (unsigned __int8)(*(_WORD *)(v1 + 54) + *(_WORD *)(v1 + 56));
  }
  return v4;
}
