int __fastcall sub_805E208(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1

  v2 = a1;
  v3 = a2;
  if ( sub_8064824(a2) << 24 || FieldObjectIsTrainerAndCloseToPlayer(v2) << 24 )
    *(_WORD *)(v3 + 48) = 3;
  return 0;
}
