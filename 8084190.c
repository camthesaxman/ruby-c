int __fastcall IsTrainerInRangeWest(int a1, __int16 a2, unsigned __int16 a3, __int16 a4)
{
  int result; // r0@4

  if ( *(_WORD *)(a1 + 18) != a4
    || (signed __int16)a3 >= (signed int)*(_WORD *)(a1 + 16)
    || (signed __int16)a3 < *(_WORD *)(a1 + 16) - a2 )
  {
    result = 0;
  }
  else
  {
    result = (*(_WORD *)(a1 + 16) - a3) & 0xFF;
  }
  return result;
}
