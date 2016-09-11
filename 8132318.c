int __fastcall sub_8132318(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  battle_side_get_owner(v202F7C9);
  *(_WORD *)(v1 + 48) = (*(_WORD *)(v1 + 46) + *(_WORD *)(v1 + 48)) & 0xFF;
  *(_WORD *)(v1 + 36) = cosine(*(_WORD *)(v1 + 48), 20);
  *(_WORD *)(v1 + 38) = sine(*(_WORD *)(v1 + 48), 20);
  if ( *(_BYTE *)(v1 + 63) & 0x10 )
    move_anim_8072740(v1);
  ++*(_WORD *)(v1 + 50);
  return v3;
}
