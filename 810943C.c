int dp15_get_held_item_x12__8()
{
  unsigned __int8 *v0; // r0@2
  int v1; // r4@4
  int v3; // [sp+4h] [bp-4h]@0

  if ( *(_BYTE *)(v2039238 + 1) == 1 )
    v0 = (unsigned __int8 *)33704967;
  else
    v0 = (unsigned __int8 *)33704968;
  v1 = *v0;
  if ( battle_side_get_owner(*v0) << 24 )
    v2016808 = itemid_get_x12(*(_WORD *)(88 * v1 + 0x2024AAE)) & 0xFF;
  else
    v2016808 = *(_BYTE *)((battle_get_per_side_status(v1) & 1) + 0x2016A22);
  v2039238 += 2;
  return v3;
}
