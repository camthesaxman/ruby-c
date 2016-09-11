_BOOL4 __fastcall DoWildEncounterRateDiceRoll(unsigned __int16 a1)
{
  return ((unsigned __int16)Random() % 0xB40u & 0xFFFF) < a1;
}
