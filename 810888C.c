int dp15_simulate_damage_bonus_jump_if_eq()
{
  int v1; // [sp+8h] [bp-4h]@0

  v2024DEC = 0;
  v201601C = 0;
  v201601F = 1;
  v2024C68 = 0;
  v2024C0D = 1;
  v2024BEC = 40;
  v2024BE6 = v2016802;
  move_effectiveness_something(v2016802, v2024C07, v2024C08);
  if ( v2024BEC == 120 )
    v2024BEC = 80;
  if ( v2024BEC == 240 )
    v2024BEC = 160;
  if ( v2024BEC == 30 )
    v2024BEC = 20;
  if ( v2024BEC == 15 )
    v2024BEC = 10;
  if ( v2024C68 & 8 )
    v2024BEC = 0;
  if ( v2024BEC == *(_BYTE *)(v2039238 + 1) )
    v2039238 = *(_BYTE *)(v2039238 + 2) | (*(_BYTE *)(v2039238 + 3) << 8) | (*(_BYTE *)(v2039238 + 4) << 16) | (*(_BYTE *)(v2039238 + 5) << 24);
  else
    v2039238 += 6;
  return v1;
}
