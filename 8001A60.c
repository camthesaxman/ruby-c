int __fastcall AffineAnimDelay(unsigned __int8 a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v5; // [sp+0h] [bp-14h]@2
  int v6; // [sp+10h] [bp-4h]@3

  v2 = a2;
  v3 = a1;
  if ( !(DecrementAffineAnimDelayCounter(a2, a1) << 24) )
  {
    GetAffineAnimFrame(v3, v2, &v5);
    ApplyAffineAnimFrameRelativeAndUpdateMatrix(v3, &v5);
  }
  return v6;
}
