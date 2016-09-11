signed int sub_811A99C()
{
  int *v0; // r1@2
  int (*v1)(); // r0@2

  if ( sub_81474C8() << 24 )
  {
    v202E8DC = (unsigned __int8)byte_3005CE0;
    dword_300485C = (int)sub_808AB90;
    v0 = &dword_3005CE4;
    v1 = sub_811AA38;
  }
  else
  {
    if ( (unsigned __int8)npc_before_player_of_type(0x57u) != 1 )
      return 0;
    v202E8DC = (unsigned __int8)byte_3005CE0;
    dword_300485C = (int)sub_808AB90;
    v0 = &dword_3005CE4;
    v1 = sub_811AA18;
  }
  *v0 = (int)v1;
  return 1;
}
