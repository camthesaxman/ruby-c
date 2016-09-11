int mapldr_08084390()
{
  int v1; // [sp+4h] [bp-4h]@0

  sub_8053E90();
  pal_fill_black();
  CreateTask((int)c3_080843F8, 0);
  BYTE1(dword_30048A0[9 * v202E85D]) |= 0x20u;
  if ( v202E858 & 8 )
    FieldObjectTurn((int)&dword_30048A0[9 * v202E85D], 3u);
  script_env_2_enable();
  player_bitmagic();
  dword_300485C = 0;
  return v1;
}
