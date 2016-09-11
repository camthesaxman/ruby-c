unsigned int __fastcall sub_80406D8(unsigned __int16 a1)
{
  unsigned __int16 v1; // r4@1
  unsigned int result; // r0@2

  v1 = a1;
  if ( sub_806912C() )
  {
    result = (unsigned __int16)SpeciesToNationalPokedexNum(v1);
  }
  else
  {
    result = SpeciesToHoennPokedexNum(v1);
    if ( result > 0xCA )
      result = 0xFFFF;
  }
  return result;
}
