int sub_80C791C()
{
  int v1; // [sp+0h] [bp-4h]@0

  sub_80C78A0();
  BYTE1(dword_30048A0[9 * v202E85D]) |= 0x20u;
  pal_fill_black();
  CreateTask((int)sub_80C77A0, 80);
  script_env_2_enable();
  return v1;
}
