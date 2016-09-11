int sub_805465C()
{
  int v0; // r0@1
  int v1; // r0@1
  int v2; // r0@1
  int v3; // r0@1
  int v5; // [sp+0h] [bp-4h]@0

  v0 = sub_80547A8();
  v1 = sub_8074D08(v0);
  sub_8054F70(v1);
  set_callback1((int)sub_8055354);
  sub_80543DC((int)sub_8055390);
  dword_300485C = (int)sub_8080A3C;
  v2 = script_env_1_init(sub_8080A3C);
  v3 = script_env_2_disable(v2);
  c2_exit_to_overworld_2_switch(v3);
  return v5;
}
