int get_trainer_class_name_index()
{
  _BYTE *v0; // r0@2

  if ( v2025408 == 200 )
  {
    v0 = &gTrainerClassToNameIndex[v202533D];
  }
  else if ( v2025408 > 0x63u )
  {
    v0 = &gTrainerClassToNameIndex[*(_BYTE *)(164 * (v2025408 - 100) + 0x2024FF1)];
  }
  else
  {
    v0 = &gTrainerClassToNameIndex[*((_BYTE *)&gBattleTowerTrainers + 24 * v2025408)];
  }
  return *v0;
}
