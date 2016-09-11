int __fastcall sub_811AC0C(int a1)
{
  int v1; // r4@1

  v1 = a1;
  CreateTask((int)*(&gBattleTransitionFuncs + *(_WORD *)(a1 + 10)), 0);
  ++*(_WORD *)(v1 + 8);
  return 0;
}
