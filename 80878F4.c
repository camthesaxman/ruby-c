int __fastcall sub_80878F4(int a1)
{
  int v2; // [sp+4h] [bp-4h]@0

  ++*(_WORD *)(a1 + 8);
  *(_WORD *)(a1 + 36) = 64;
  *(_WORD *)(a1 + 38) = (unsigned __int8)player_get_direction_lower_nybble();
  return v2;
}
