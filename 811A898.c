signed int __fastcall sub_811A898(unsigned __int16 a1)
{
  unsigned __int16 v1; // r4@1
  signed int result; // r0@2

  v1 = a1;
  if ( (unsigned __int16)GetCoins() >= (unsigned int)a1 )
  {
    v2025BC8 -= v1;
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
