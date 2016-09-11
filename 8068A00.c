signed int __fastcall mapheader_run_first_tag2_script_list_match_conditionally(int a1, unsigned __int16 a2, unsigned __int8 a3)
{
  int v3; // r7@1
  int v4; // r4@1
  int v5; // r5@1
  int v6; // r6@1
  int v7; // r0@3
  signed int result; // r0@3

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = (unsigned __int8)map_warp_check_packed();
  if ( (is_non_stair_warp_tile(v4, v5) & 0xFF) != 1 || (char)v6 == -1 )
  {
    result = 0;
  }
  else
  {
    walkrun_find_lowest_active_bit_in_bitfield();
    v7 = sub_8068C30(33744936, (char)v6, v3);
    sub_8080E88(v7);
    result = 1;
  }
  return result;
}
