signed int sub_808ACA8()
{
  int *v0; // r1@2
  int (*v1)(); // r0@2

  if ( sub_8147588() << 24 )
  {
    dword_300485C = (int)sub_808AB90;
    v0 = &dword_3005CE4;
    v1 = sub_81475C4;
  }
  else
  {
    if ( (unsigned __int8)is_light_level_1_2_3_or_6(v202E83F) != 1 )
      return 0;
    dword_300485C = (int)sub_808AB90;
    v0 = &dword_3005CE4;
    v1 = sub_808AC8C;
  }
  *v0 = (int)v1;
  return 1;
}
