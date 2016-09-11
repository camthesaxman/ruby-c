int ClearPokemonCrySongs()
{
  __int16 v1; // [sp+0h] [bp-8h]@1
  int v2; // [sp+4h] [bp-4h]@1

  v1 = 0;
  CpuSet(&v1, &gPokemonCrySongs, 16777268);
  return v2;
}
