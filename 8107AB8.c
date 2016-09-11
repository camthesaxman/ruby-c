int sub_8107AB8()
{
  unsigned __int8 *v0; // r0@2
  int v2; // [sp+4h] [bp-4h]@0

  if ( *(_BYTE *)(v2039238 + 1) == 1 )
    v0 = (unsigned __int8 *)33704967;
  else
    v0 = (unsigned __int8 *)33704968;
  if ( *(_WORD *)(2 * (battle_get_per_side_status(*v0) & 1) + 0x2024C7A) & (*(_BYTE *)(v2039238 + 2) | (*(_BYTE *)(v2039238 + 3) << 8) | (*(_BYTE *)(v2039238 + 4) << 16) | (*(_BYTE *)(v2039238 + 5) << 24)) )
    v2039238 = *(_BYTE *)(v2039238 + 6) | (*(_BYTE *)(v2039238 + 7) << 8) | (*(_BYTE *)(v2039238 + 8) << 16) | (*(_BYTE *)(v2039238 + 9) << 24);
  else
    v2039238 += 10;
  return v2;
}
