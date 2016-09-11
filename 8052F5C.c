int sub_8052F5C()
{
  int v0; // r0@1
  int v1; // r0@1
  int v2; // r0@1
  int v4; // [sp+0h] [bp-4h]@0

  script_env_2_execute_new_script(&gUnknown_0819FC74);
  v2025BC4 >>= 1;
  v0 = sp000_heal_pokemon();
  v1 = sub_8053050(v0);
  v2 = sub_8053570(v1);
  warp_in(v2);
  return v4;
}
