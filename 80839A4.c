int sub_80839A4()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( ((v202E8CC - 1) & 0xFFFFu) <= 1 || v202E8CC == 5 )
  {
    copy_player_party_from_sav1();
    copy_bags_and_unk_data_to_save_blocks();
  }
  copy_saved_warp2_bank_and_enter_x_to_warp1();
  return v1;
}
