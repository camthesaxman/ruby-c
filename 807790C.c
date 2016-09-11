int ma2C_make_side_visible()
{
  unsigned __int8 v0; // r0@1
  int v2; // [sp+4h] [bp-4h]@0

  v0 = obj_id_for_side_relative_to_move(*(_BYTE *)(v202F7A4 + 1));
  if ( v0 != 255 )
    gSprites[68 * v0 + 62] &= 0xFBu;
  v202F7A4 += 2;
  return v2;
}
