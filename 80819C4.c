int __fastcall task_add_01_battle_start(unsigned __int8 a1, unsigned __int16 a2)
{
  int v3; // [sp+8h] [bp-4h]@0

  HIWORD(dword_3004B20[10 * (unsigned __int8)CreateTask((int)task01_battle_start, 1) + 2]) = a1;
  current_map_music_set__default_for_battle(a2);
  return v3;
}
