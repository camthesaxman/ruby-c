int __fastcall task_new_game_prof_birch_speech_9(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( MenuUpdateWindowText_OverrideLineLength(24) << 24 )
  {
    MenuDrawTextWindow(2, 13, 27, 18);
    MenuPrintMessage(&gUnknown_081C6FCB, 3, 14);
    dword_3004B20[10 * v1] = (int)task_new_game_prof_birch_speech_10;
  }
  return v3;
}
