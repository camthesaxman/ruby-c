int sub_814761C()
{
  int v1; // [sp+0h] [bp-4h]@0

  MapGridSetMetatileIdAt(14, 26, 554);
  MapGridSetMetatileIdAt(15, 26, 555);
  MapGridSetMetatileIdAt(16, 26, 556);
  MapGridSetMetatileIdAt(14, 27, 3634);
  MapGridSetMetatileIdAt(15, 27, 563);
  MapGridSetMetatileIdAt(16, 27, 3636);
  DrawWholeMapView();
  audio_play(0x14u);
  FlagSet(0x852u);
  script_env_2_disable();
  return v1;
}
