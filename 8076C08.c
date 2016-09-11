int ma14_load_background()
{
  __int16 v0; // r4@1
  int v2; // [sp+4h] [bp-4h]@0

  ++v202F7A4;
  v0 = *v202F7A4;
  ++v202F7A4;
  LOWORD(dword_3004B20[10 * (unsigned __int8)CreateTask(task_p5_load_battle_screen_elements, 5) + 2]) = v0;
  v202F7C5 = 1;
  return v2;
}
