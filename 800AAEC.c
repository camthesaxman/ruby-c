int __fastcall task_new_game_prof_birch_speech_part2_1(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  MenuDrawTextWindow(2, 13, 27, 18);
  StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_081C7017);
  MenuPrintMessage(&gStringVar4, 3, 14);
  dword_3004B20[10 * v1] = (int)sub_800AB38;
  return v3;
}
