int __fastcall sub_80CFF68(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  __int16 v3; // r0@3
  __int16 v4; // r0@4
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46) + 128;
  *(_WORD *)(v1 + 46) = v2;
  *(_WORD *)(v1 + 36) = v2 << 16 >> 24;
  if ( !(battle_side_get_owner(v202F7C8) << 24) )
    *(_WORD *)(v1 + 36) = -*(_WORD *)(v1 + 36);
  *(_WORD *)(v1 + 38) = sine(*(_WORD *)(v1 + 48), *(_WORD *)(v1 + 50));
  v3 = *(_WORD *)(v1 + 48) + 5;
  *(_WORD *)(v1 + 48) = v3;
  if ( v3 > 126 )
  {
    *(_WORD *)(v1 + 48) = 0;
    *(_WORD *)(v1 + 50) /= 2;
    v4 = *(_WORD *)(v1 + 52) + 1;
    *(_WORD *)(v1 + 52) = v4;
    if ( v4 == 2 )
      move_anim_8072740(v1);
  }
  return v6;
}
