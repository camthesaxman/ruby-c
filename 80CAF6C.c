int __fastcall sub_80CAF6C(int a1)
{
  int v1; // r4@1
  int v2; // r0@2
  __int16 v3; // r0@4
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( battle_side_get_owner(v202F7C8) << 24 )
    v2 = -sine(*(_WORD *)(v1 + 46), 25);
  else
    LOWORD(v2) = sine(*(_WORD *)(v1 + 46), 25);
  *(_WORD *)(v1 + 36) = v2;
  *(_WORD *)(v1 + 46) = (*(_WORD *)(v1 + 46) + 2) & 0xFF;
  v3 = *(_WORD *)(v1 + 48) + 1;
  *(_WORD *)(v1 + 48) = v3;
  if ( !(v3 & 1) )
    ++*(_WORD *)(v1 + 38);
  if ( (signed int)*(_WORD *)(v1 + 48) > 80 )
    move_anim_8072740(v1);
  return v5;
}
