int mli4_mapscripts_and_other()
{
  signed int v0; // r5@1
  int v1; // r0@1
  int v2; // r0@1
  signed __int16 v4; // [sp+0h] [bp-10h]@1
  int v5; // [sp+Ch] [bp-4h]@1

  word_300489C = 0;
  word_3004898 = 0;
  sub_805AA98();
  sav1_camera_get_focus_coords(&v4, &v4 + 1);
  v0 = sub_8053AA8();
  InitPlayerAvatar(v4, *(&v4 + 1), *(_BYTE *)(v0 + 1), v2024EAC);
  SetPlayerAvatarTransitionFlags(*(_BYTE *)v0);
  player_avatar_init_params_reset();
  v1 = sub_805B55C(0, 0);
  v2 = ResetBerryTreeSparkleFlags(v1);
  mapheader_run_first_tag4_script_list_match(v2);
  return v5;
}
