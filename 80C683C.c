int sub_80C683C()
{
  signed __int16 v1; // [sp+0h] [bp-Ch]@1
  int v2; // [sp+8h] [bp-4h]@4

  GetXYCoordsOneStepInFrontOfPlayer(&v1, &v1 + 1);
  audio_play(3u);
  if ( VarGet(16468) << 16 )
    MapGridSetMetatileIdAt(v1, *(&v1 + 1), 3617);
  else
    MapGridSetMetatileIdAt(v1, *(&v1 + 1), 3616);
  CurrentMapDrawMetatileAt(v1, *(&v1 + 1));
  return v2;
}
