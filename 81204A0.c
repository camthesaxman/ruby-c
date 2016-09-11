int sub_81204A0()
{
  int v0; // r0@1
  char v1; // r3@1
  int v3; // [sp+4h] [bp-4h]@0

  v0 = battle_side_get_owner(v2024A60);
  v1 = 63;
  if ( !(v0 << 24) )
    v1 = -64;
  audio_play_and_stuff(
    *(_BYTE *)((v2024A60 << 9) + 0x2023A61) | (unsigned __int16)(*(_BYTE *)((v2024A60 << 9) + 0x2023A62) << 8),
    v1);
  dp01_tbl3_exec_completed();
  return v3;
}
