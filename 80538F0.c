int __fastcall sub_80538F0(int a1, int a2)
{
  unsigned int v2; // r0@1
  unsigned int v3; // r1@1
  unsigned int v4; // r5@1
  unsigned int v5; // r4@1
  int v6; // r0@1
  int v7; // r0@1
  int v8; // r0@1
  int v9; // r0@1
  int v10; // r0@1
  int v11; // r0@1
  int v12; // r0@1
  int v13; // r0@1
  int v14; // r0@1
  int v15; // r0@1
  int v16; // r0@1
  signed int v17; // r4@1
  int v18; // r0@2
  int v19; // r0@3
  int v20; // r0@3
  int v21; // r0@3
  int v22; // r0@3
  int v23; // r0@3
  int v24; // r0@3
  int v26; // [sp+Ch] [bp-4h]@0

  v2 = a1 << 24;
  v3 = a2 << 24;
  v4 = v2 >> 24;
  v5 = v3 >> 24;
  v6 = warp1_set(SBYTE3(v2), SBYTE3(v3), -1, -1, -1);
  sub_8053F0C(v6);
  warp_shift();
  set_current_map_header_from_sav1_save_old_name();
  v7 = sub_8053154();
  v8 = sub_806906C(v7);
  v9 = wild_pokemon_reroll(v8);
  prev_quest_postbuffer_cursor_backup_reset(v9);
  v10 = sub_8082BD0(v4, v5);
  v11 = InTrainerHill(v10);
  v12 = sub_80806E4(v11);
  v13 = sub_8054164(v12);
  v14 = sub_8053C98(v13);
  v15 = sav1_reset_battle_music_maybe(v14);
  v16 = mapheader_run_script_with_tag_x3(v15);
  not_trainer_hill_battle_pyramid(v16);
  sub_8056D38(v202E828);
  apply_map_tileset2_palette(v202E828);
  v17 = 6;
  do
    v18 = sub_807D874((unsigned __int8)v17++);
  while ( v17 <= 11 );
  v19 = sub_8072ED0(v18);
  v20 = mapnumbers_history_shift_sav1_0_2_4_out(v19);
  v21 = sub_8134394(v20);
  v22 = sub_808073C(v21);
  v23 = wild_encounter_reset_coro_args(v22);
  v24 = mapheader_run_script_with_tag_x5(v23);
  AddMapNamePopUpWindowTask(v24);
  return v26;
}
