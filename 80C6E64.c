int __fastcall door_restore_tilemap(int a1)
{
  int v1; // r5@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  audio_play(0x83u);
  if ( MapGridGetMetatileIdAt(v202FF98, v202FF9C - 1) == 646 )
    MapGridSetMetatileIdAt(v202FF98, v202FF9C - 1, 3586);
  else
    MapGridSetMetatileIdAt(v202FF98, v202FF9C - 1, 644);
  MapGridSetMetatileIdAt(v202FF98, v202FF9C, 522);
  CurrentMapDrawMetatileAt(v202FF98, v202FF9C - 1);
  CurrentMapDrawMetatileAt(v202FF98, v202FF9C);
  *(_WORD *)(v1 + 46) = 0;
  *(_DWORD *)(v1 + 28) = sub_80C6EE4;
  return v3;
}
