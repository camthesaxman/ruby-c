int __fastcall ApplyCleanseTagWildEncounterRateReduction(unsigned int *a1, int a2, int a3)
{
  unsigned int *v3; // r4@1
  int v5; // [sp+4h] [bp-4h]@0

  v3 = a1;
  if ( GetMonData((int)dword_3004360, 12, a3) == 190 )
    *v3 = 2 * *v3 / 3;
  return v5;
}
