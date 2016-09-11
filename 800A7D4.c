int __fastcall task_new_game_prof_birch_speech_16(unsigned __int8 a1)
{
  int v1; // r5@1
  char v2; // r0@1
  char v3; // r4@1
  int v4; // r4@3
  int v5; // r3@5
  int *v6; // r4@5
  char *v7; // r0@6
  int v9; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = GenderMenuProcessInput();
  v3 = v2;
  if ( v2 && v2 != 1 )
  {
    v4 = 4 * v1;
  }
  else
  {
    sub_8072DEC();
    audio_play(5);
    v2024EAC = v3;
    MenuZeroFillWindowRect(2, 4, 8, 9);
    dword_3004B20[10 * v1] = (int)sub_800A974;
    v4 = 4 * v1;
  }
  v5 = GetMenuCursorPos() & 0xFF;
  v6 = &dword_3004B20[2 * (v4 + v1)];
  if ( v5 != *((_WORD *)v6 + 10) )
  {
    *((_WORD *)v6 + 10) = v5;
    v7 = &gSprites[68 * *((_WORD *)v6 + 6)];
    v7[1] = v7[1] & 0xF3 | 4;
    sub_800B458(v1, 0);
    *v6 = (int)task_new_game_prof_birch_speech_17;
  }
  return v9;
}
