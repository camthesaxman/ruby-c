int get_trainer_class_pic_index()
{
  _BYTE *v0; // r0@2

  if ( v2025408 == 200 )
  {
    v0 = &gTrainerClassToPicIndex[v202533D];
  }
  else if ( v2025408 <= 0x63u )
  {
    v0 = &gTrainerClassToPicIndex[*((_BYTE *)&gBattleTowerTrainers + 24 * v2025408)];
  }
  else
  {
    v0 = &gTrainerClassToPicIndex[*(_BYTE *)(164 * (v2025408 - 100) + 0x2024FF1)];
  }
  return *v0;
}
