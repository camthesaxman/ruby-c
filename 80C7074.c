int overworld_posion_effect()
{
  int v1; // [sp+0h] [bp-4h]@0

  audio_play(0x4Fu);
  CreateTask((int)task50_overworld_posion_effect, 80);
  return v1;
}
