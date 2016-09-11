signed int __fastcall sub_8053850(unsigned __int8 a1, char a2, char a3)
{
  char v3; // r4@1
  char v4; // r5@1
  _BYTE *v5; // r0@1

  v3 = a2;
  v4 = a3;
  v5 = sub_8053818(a1);
  if ( v5 )
  {
    warp1_set(v5[8], v5[9], -1, v3, v4);
  }
  else
  {
    mapheader_run_script_with_tag_x6();
    if ( warp_data_is_not_neg_1(33724416) )
      return 0;
    warp1_set_to_warp2();
  }
  return 1;
}
