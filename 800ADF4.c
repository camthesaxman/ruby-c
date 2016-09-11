int __fastcall task_new_game_prof_birch_speech_part2_8(unsigned __int8 a1)
{
  int v1; // r6@1
  int *v2; // r4@1
  char *v3; // r0@2
  char *v4; // r0@2
  int v5; // r5@5
  char *v6; // r1@7
  int *v7; // r4@7
  int v9; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v2 + 9) )
  {
    v3 = &gSprites[68 * *((_WORD *)v2 + 12) + 62];
    *v3 |= 4u;
    v4 = &gSprites[68 * *((_WORD *)v2 + 13) + 62];
    *v4 |= 4u;
    if ( *((_WORD *)v2 + 11) )
    {
      --*((_WORD *)v2 + 11);
    }
    else
    {
      if ( v2024EAC )
        v5 = *((_BYTE *)v2 + 30);
      else
        v5 = *((_BYTE *)v2 + 28);
      v6 = &gSprites[68 * v5];
      *((_WORD *)v6 + 16) = 120;
      *((_WORD *)v6 + 17) = 60;
      v6[62] &= 0xFBu;
      v6[1] = v6[1] & 0xF3 | 4;
      v7 = &dword_3004B20[10 * v1];
      *((_WORD *)v7 + 6) = v5;
      sub_800B534(v1, 2);
      sub_800B6C0(v1, 1);
      MenuDrawTextWindow(2, 13, 27, 18);
      MenuPrintMessage(&gUnknown_081C7074, 3, 14);
      *v7 = (int)task_new_game_prof_birch_speech_part2_9;
    }
  }
  return v9;
}
