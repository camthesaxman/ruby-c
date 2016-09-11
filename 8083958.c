int sub_8083958()
{
  int v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  call_map_music_set_to_zero();
  copy_player_party_from_sav1();
  v0 = copy_bags_and_unk_data_to_save_blocks();
  sub_810FEFC(v0);
  if ( v202E8CC != 5 )
    sub_8110290((unsigned __int8)byte_3004860 ^ 1);
  dword_3001778 = (int)sub_805465C;
  SetMainCallback2((int)sub_8071B28);
  return v2;
}
