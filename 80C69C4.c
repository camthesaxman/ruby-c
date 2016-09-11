int __fastcall sub_80C69C4(__int16 a1, __int16 a2)
{
  __int16 v2; // r5@1
  __int16 v3; // r4@1
  int v5; // [sp+Ch] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  audio_play(0x4Du);
  MapGridSetMetatileIdAt(v2, v3, 630);
  MapGridSetMetatileIdAt(v2, v3 - 1, 622);
  CurrentMapDrawMetatileAt(v2, v3);
  CurrentMapDrawMetatileAt(v2, v3 - 1);
  return v5;
}
