int __fastcall sub_811AC34(int a1)
{
  int v1; // r4@1

  v1 = a1;
  *(_WORD *)(a1 + 38) = 0;
  if ( (unsigned __int8)FindTaskIdByFunc((int)*(&gBattleTransitionFuncs + *(_WORD *)(a1 + 10))) == 255 )
    *(_WORD *)(v1 + 38) = 1;
  return 0;
}
