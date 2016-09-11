int HideMapNamePopUpWindow()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( FuncIsActiveTask((int)sub_80A2FF4) << 24 )
  {
    MenuLoadTextWindowGraphics();
    MenuZeroFillWindowRect(0, 0, 0xDu, 3u);
    v4000012 = 0;
    DestroyTask(v2038538);
  }
  return v1;
}
