int sub_8147408()
{
  int v1; // [sp+0h] [bp-4h]@0

  MapGridSetMetatileIdAt(16, 8, 554);
  MapGridSetMetatileIdAt(17, 8, 555);
  MapGridSetMetatileIdAt(18, 8, 556);
  MapGridSetMetatileIdAt(16, 9, 3634);
  MapGridSetMetatileIdAt(17, 9, 563);
  MapGridSetMetatileIdAt(18, 9, 3636);
  DrawWholeMapView();
  audio_play(0x14u);
  FlagSet(0x84Fu);
  script_env_2_disable();
  return v1;
}
