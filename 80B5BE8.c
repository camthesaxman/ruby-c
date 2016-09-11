int NamingScreen_TurnOffScreen()
{
  int v1; // [sp+0h] [bp-4h]@0

  SetVBlankCallback(0);
  SetHBlankCallback(0);
  v4000000 = 0;
  return v1;
}
