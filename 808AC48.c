signed int sub_808AC48()
{
  signed int result; // r0@3

  if ( (unsigned __int8)PartyHasMonWithSurf() != 1 || (unsigned __int8)IsPlayerFacingSurfableFishableWater() != 1 )
  {
    result = 0;
  }
  else
  {
    dword_300485C = (int)sub_808AB90;
    dword_3005CE4 = (int)sub_808AC2C;
    result = 1;
  }
  return result;
}
