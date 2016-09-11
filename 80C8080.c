int sub_80C8080()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( GetCurrentMapRotatingGatePuzzleType() )
  {
    LoadRotatingGatePics();
    sub_80C7A80();
    sub_80C7ADC(0, 0);
  }
  return v1;
}
