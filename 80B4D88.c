int __fastcall GetNumStagesWateredByBerryTreeId(unsigned __int8 a1)
{
  int v1; // r0@1

  v1 = GetBerryTreeInfo(a1);
  return (unsigned __int8)BerryTreeGetNumStagesWatered(v1);
}
