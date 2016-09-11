unsigned int __fastcall speciesid_conv(unsigned int result)
{
  result = (unsigned __int16)result;
  if ( (unsigned __int16)result > 0xFAu )
  {
    if ( result <= 0x113 )
      result = 200;
    else
      result = gSpeciesIdToCryId[result - 276];
  }
  return result;
}
