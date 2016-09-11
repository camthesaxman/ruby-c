signed int __fastcall sub_812550C(unsigned __int16 a1, int a2)
{
  signed int v2; // r5@2

  if ( (unsigned __int16)word_3005EB4 >= a1 - 1 )
  {
    v2 = 255;
  }
  else
  {
    v2 = 1;
    sub_81252D8(word_3005EB4, a2);
    ++word_3005EB4;
    if ( dword_3005EA8 )
    {
      v2 = 255;
      word_3005E9C = word_3005EA4;
      dword_3005EAC = dword_3005EA0;
    }
  }
  return v2;
}
