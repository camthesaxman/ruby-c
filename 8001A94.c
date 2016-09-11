int __fastcall AffineAnimCmd_loop(unsigned __int8 a1, int a2)
{
  int v3; // [sp+0h] [bp-4h]@0

  if ( sAffineAnimStates[12 * a1 + 3] )
    ContinueAffineAnimLoop(a1, a2);
  else
    BeginAffineAnimLoop(a1, a2);
  return v3;
}
