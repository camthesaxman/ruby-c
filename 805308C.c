int sub_805308C()
{
  int v0; // r0@1
  int v1; // r0@1
  int v2; // r0@1
  int v3; // r0@1
  int v5; // [sp+0h] [bp-4h]@0

  v0 = FlagReset(2092);
  v1 = sub_8054164(v0);
  v2 = wild_pokemon_reroll(v1);
  v3 = mapnumbers_history_shift_sav1_0_2_4_out(v2);
  sub_8134348(v3);
  return v5;
}
