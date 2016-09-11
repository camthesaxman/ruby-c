int __fastcall sub_812E7F0(int a1)
{
  int v1; // r4@1
  __int16 v2; // r1@2
  __int16 v3; // r0@4
  __int16 v4; // r1@5
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 46) += 3;
  if ( battle_side_get_owner(v202F7C8) << 24 )
  {
    v4 = *(_WORD *)(v1 + 32) - 5;
    *(_WORD *)(v1 + 32) = v4;
    ++*(_WORD *)(v1 + 34);
    if ( v4 & 0x8000 )
      move_anim_8072740(v1);
    v3 = cosine(*(_WORD *)(v1 + 46) & 0xFF, 16);
  }
  else
  {
    v2 = *(_WORD *)(v1 + 32) + 5;
    *(_WORD *)(v1 + 32) = v2;
    --*(_WORD *)(v1 + 34);
    if ( v2 > 240 )
      move_anim_8072740(v1);
    v3 = sine(*(_WORD *)(v1 + 46) & 0xFF, 16);
  }
  *(_WORD *)(v1 + 38) = v3;
  return v6;
}
