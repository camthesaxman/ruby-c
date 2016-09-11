int __fastcall task_new_game_prof_birch_speech_4(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) && MenuUpdateWindowText_OverrideLineLength(24) << 24 )
  {
    dword_3004B20[10 * v1] = (int)task_new_game_prof_birch_speech_5;
    MenuPrintMessage(gUnknown_081C6DF8, 3, 14);
  }
  return v3;
}
