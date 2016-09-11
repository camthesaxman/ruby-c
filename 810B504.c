signed int hm_prepare_rocksmash()
{
  signed int result; // r0@2

  if ( (unsigned __int8)npc_before_player_of_type(0x56u) == 1 )
  {
    dword_300485C = (int)sub_808AB90;
    dword_3005CE4 = (int)sub_810B53C;
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
