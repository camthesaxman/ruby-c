int sub_812B9C4()
{
  char v0; // r4@1
  char v1; // r0@1
  int v3; // [sp+8h] [bp-4h]@0

  v2017848 = 4;
  v2024E6D = 1;
  v0 = v2024A60;
  v1 = battle_get_side_with_given_state(1u);
  move_anim_start_t4(v0, v0, v1, 4u);
  dword_3004330[v2024A60] = (int)bx_wait_t6;
  return v3;
}
