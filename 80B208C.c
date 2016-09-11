char *__fastcall sub_80B208C(unsigned __int8 a1)
{
  char *result; // r0@2

  if ( (*(_BYTE *)(28 * a1 + 0x2019270) & 0xC0) == 64 )
    result = (char *)&gContestNextTurnNumbersGfx + 64 * *(_BYTE *)(28 * a1 + 0x2019279);
  else
    result = (char *)&gContestNextTurnRandomGfx;
  return result;
}
