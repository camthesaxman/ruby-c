signed int __fastcall GetGenderFromSpeciesAndPersonality(unsigned __int16 a1, unsigned __int8 a2)
{
  int v2; // r2@1
  signed int result; // r0@1

  v2 = a1;
  result = *((_BYTE *)&gBaseStats + 28 * a1 + 16);
  if ( result && (result < 0 || result > 255 || result < 254) )
  {
    if ( *((_BYTE *)&gBaseStats + 28 * v2 + 16) > (unsigned int)a2 )
      result = 254;
    else
      result = 0;
  }
  return result;
}
