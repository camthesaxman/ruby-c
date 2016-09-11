int __fastcall IsTrainerInRangeSouth(int a1, __int16 a2, __int16 a3, unsigned __int16 a4)
{
  int result; // r0@4

  if ( *(_WORD *)(a1 + 16) != a3
    || (signed __int16)a4 <= (signed int)*(_WORD *)(a1 + 18)
    || (signed __int16)a4 > *(_WORD *)(a1 + 18) + a2 )
  {
    result = 0;
  }
  else
  {
    result = (a4 - *(_WORD *)(a1 + 18)) & 0xFF;
  }
  return result;
}
