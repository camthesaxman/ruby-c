int __fastcall CalcBerryYield(unsigned __int8 *a1)
{
  int v1; // r4@1
  char *v2; // r0@1
  int v3; // r6@1
  int v4; // r5@1
  unsigned __int8 v5; // r0@1

  v1 = (int)a1;
  v2 = GetBerryInfo(*a1);
  v3 = (unsigned __int8)v2[11];
  v4 = (unsigned __int8)v2[10];
  v5 = BerryTreeGetNumStagesWatered(v1);
  return (unsigned __int8)CalcBerryYieldInternal(v4, v3, v5);
}
