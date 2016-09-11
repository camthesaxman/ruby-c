signed int sub_814A374()
{
  signed int result; // r0@2

  if ( (unsigned __int8)is_light_level_1_2_3_or_6(v202E83F) == 1 )
  {
    dword_300485C = (int)sub_808AB90;
    dword_3005CE4 = (int)hm_teleport_run_dp02scr;
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
