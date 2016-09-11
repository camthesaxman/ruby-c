signed int __fastcall sub_8068024(int a1)
{
  int v1; // r5@1
  int v2; // r6@1
  int v3; // r4@1
  int v4; // r4@12
  int v5; // r0@20
  signed __int16 v7; // [sp+0h] [bp-18h]@1

  v1 = a1;
  v2 = (unsigned __int8)player_get_direction_lower_nybble();
  player_get_pos_to_and_height(&v7);
  v3 = (unsigned __int16)MapGridGetMetatileBehaviorAt(v7, *(&v7 + 1));
  if ( (sub_8083FBC() & 0xFF) == 1
    || (unsigned __int8)mapheader_run_first_tag2_script_list_match() == 1
    || *(_BYTE *)v1 & 0x80 && sub_80687A4() == 1 )
  {
    return 1;
  }
  if ( *(_BYTE *)v1 & 0x40 )
  {
    sav12_xor_increment(5u);
    if ( (sub_80687E4(&v7, v3, v2) & 0xFF) == 1 )
      return 1;
  }
  if ( *(_BYTE *)v1 & 2 && (is_it_battle_time_3(v3) & 0xFF) == 1 )
    return 1;
  if ( *(_BYTE *)v1 & 0x10
    && *(_BYTE *)(v1 + 2) == v2
    && (mapheader_run_first_tag2_script_list_match_conditionally(&v7, v3, v2) & 0xFF) == 1 )
  {
    return 1;
  }
  player_get_next_pos_and_height(&v7);
  v4 = (unsigned __int16)MapGridGetMetatileBehaviorAt(v7, *(&v7 + 1));
  if ( *(_BYTE *)v1 & 1 )
  {
    if ( (sub_80681F0(&v7, v4, v2) & 0xFF) == 1 )
      return 1;
  }
  if ( *(_BYTE *)v1 & 0x20 && *(_BYTE *)(v1 + 2) == v2 && (map_warp_consider_2_to_inside(&v7, v4, v2) & 0xFF) == 1
    || *(_BYTE *)v1 & 1 && sub_8068770() == 1 )
  {
    return 1;
  }
  if ( *(_BYTE *)v1 & 4 )
  {
    v5 = audio_play(6);
    sub_8071310(v5);
    return 1;
  }
  if ( *(_BYTE *)v1 & 8 && sub_80A6D1C() == 1 )
    return 1;
  return 0;
}
