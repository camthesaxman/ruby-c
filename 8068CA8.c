signed int __fastcall map_warp_consider_2_to_inside(_WORD *a1, int a2, char a3)
{
  _WORD *v3; // r5@1
  unsigned int v4; // r1@1
  int v5; // r7@1
  int v6; // r4@2
  signed int result; // r0@3
  int v8; // r4@5
  int v9; // r0@7

  v3 = a1;
  v4 = a2 << 16;
  v5 = v4 >> 16;
  if ( a3 != 2 )
    goto LABEL_11;
  v6 = (v4 >> 16) & 0xFF;
  if ( (unsigned __int8)sub_80571C0(v6) == 1 )
  {
    sub_80BC038(v3, v202E82C);
    return 1;
  }
  if ( (unsigned __int8)is_tile_x69_2_warp_door(v6) != 1
    || (v8 = (char)map_warp_check_packed(33744936, v3), v8 == -1)
    || (unsigned __int8)sub_8068B30(v5) != 1 )
  {
LABEL_11:
    result = 0;
  }
  else
  {
    walkrun_find_lowest_active_bit_in_bitfield();
    v9 = sub_8068C30(33744936, v8, (int)v3);
    sub_8080EF0(v9);
    result = 1;
  }
  return result;
}
