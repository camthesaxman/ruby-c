int TurnOffTVScreen()
{
  int v1; // [sp+0h] [bp-4h]@0

  SetTVMetatilesOnMap(dword_3004870, dword_3004874, 2);
  DrawWholeMapView();
  return v1;
}
