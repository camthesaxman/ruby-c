int __fastcall NationalPokedexNumToSpecies(unsigned __int16 a1)
{
  unsigned int v1; // r1@2
  int result; // r0@6

  if ( !a1 )
    goto LABEL_10;
  v1 = 0;
  if ( (unsigned __int16)gSpeciesToNationalPokedexNum[0] != a1 )
  {
    do
      v1 = (v1 + 1) & 0xFFFF;
    while ( v1 <= 0x19A && (unsigned __int16)gSpeciesToNationalPokedexNum[v1] != a1 );
  }
  if ( v1 != 411 )
    result = (v1 + 1) & 0xFFFF;
  else
LABEL_10:
    result = 0;
  return result;
}
