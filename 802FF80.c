int sub_802FF80()
{
  int v0; // r4@1
  int v2; // [sp+8h] [bp-4h]@0

  v2017848 = 4;
  v2024E6D = 1;
  v0 = v2024A60;
  battle_get_side_with_given_state(1);
  move_anim_start_t4(v0, v0);
  dword_3004330[v2024A60] = (int)bx_wait_t1;
  return v2;
}
