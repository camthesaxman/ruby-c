int __fastcall task_new_game_prof_birch_speech_3(unsigned __int8 a1)
{
  int *v1; // r4@1
  char *v2; // r1@2
  int v4; // [sp+4h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v1 + 9) )
  {
    v2 = &gSprites[68 * *((_WORD *)v1 + 12)];
    v2[1] &= 0xF3u;
    if ( *((_WORD *)v1 + 11) )
    {
      --*((_WORD *)v1 + 11);
    }
    else
    {
      MenuDrawTextWindow(2, 13, 27, 18);
      MenuPrintMessage(&gUnknown_081C6D78, 3, 14);
      *v1 = (int)task_new_game_prof_birch_speech_4;
    }
  }
  return v4;
}
