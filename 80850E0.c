_BOOL4 DoGlobalWildEncounterDiceRoll()
{
  return ((unsigned __int16)Random() % 0x64u & 0xFFFF) <= 0x3B;
}
