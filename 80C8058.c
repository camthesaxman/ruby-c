int __fastcall RotatingGatePuzzleCameraUpdate(__int16 a1, __int16 a2)
{
  __int16 v2; // r4@1
  __int16 v3; // r5@1
  int v5; // [sp+8h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  if ( GetCurrentMapRotatingGatePuzzleType() )
  {
    sub_80C7ADC(v2, v3);
    sub_80C7DC0();
  }
  return v5;
}
