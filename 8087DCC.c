int mapldr_08085D88()
{
  int v1; // [sp+0h] [bp-4h]@0

  sub_8053E90();
  pal_fill_for_maplights();
  script_env_2_enable();
  player_bitmagic();
  dword_300485C = 0;
  BYTE1(dword_30048A0[9 * v202E85D]) |= 0x20u;
  CameraObjectReset2();
  CreateTask((int)sub_8087E1C, 0);
  return v1;
}
