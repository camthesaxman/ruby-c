int __fastcall sub_8053994(int a1)
{
  int v1; // r6@1
  int v2; // r5@1
  unsigned int v3; // r0@1
  unsigned int v4; // r4@1
  int v5; // r0@1
  int v6; // r0@1
  int v7; // r0@1
  int v8; // r0@3
  int v9; // r0@3
  int v10; // r0@5
  int v11; // r0@5
  int v12; // r0@5
  int v13; // r0@5
  int v14; // r0@5
  int v16; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  set_current_map_header_from_sav1_save_old_name();
  sub_8053154();
  v2 = (unsigned __int8)is_light_level_1_2_3_5_or_6(v202E83F);
  v3 = is_light_level_8_or_9(v202E83F) << 24;
  v4 = v3 >> 24;
  v5 = sub_806906C(v3);
  v6 = wild_pokemon_reroll(v5);
  prev_quest_postbuffer_cursor_backup_reset(v6);
  v7 = sub_8082BD0(v2025738 & 0xFFFF, v2025739 & 0xFFFF);
  if ( v1 != 1 )
    v7 = InTrainerHill(v7);
  v8 = sub_80806E4(v7);
  v9 = sub_8054164(v8);
  if ( v2 )
    v9 = FlagReset(2088);
  v10 = sub_8053C98(v9);
  v11 = sav1_reset_battle_music_maybe(v10);
  v12 = mapheader_run_script_with_tag_x3(v11);
  v13 = mapnumbers_history_shift_sav1_0_2_4_out(v12);
  v14 = sub_8134348(v13);
  not_trainer_hill_battle_pyramid(v14);
  if ( v1 != 1 && v4 )
  {
    UpdateTVScreensOnMap(dword_3004870, dword_3004874);
    sub_80BBCCC(1);
  }
  return v16;
}
