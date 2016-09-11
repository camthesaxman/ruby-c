int ma19_08073BC8()
{
  int v0; // r4@1
  char v1; // r0@1
  int v3; // [sp+8h] [bp-4h]@0

  v0 = *v202F7A4 | (*(_BYTE *)(++v202F7A4 + 1) << 8);
  v1 = sub_8076F98(*(_BYTE *)(v202F7A4 + 2));
  audio_play_and_stuff(v0, v1);
  v202F7A4 += 3;
  return v3;
}
