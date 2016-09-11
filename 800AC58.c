int __fastcall task_new_game_prof_birch_speech_part2_6(unsigned __int8 a1)
{
  int v1; // r6@1
  int *v2; // r7@1
  char *v3; // r0@2
  char *v4; // r0@2
  char *v5; // r1@2
  char *v6; // r0@2
  int v8; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v2 + 9) )
  {
    v3 = &gSprites[68 * *((_WORD *)v2 + 14) + 62];
    *v3 |= 4u;
    v4 = &gSprites[68 * *((_WORD *)v2 + 15) + 62];
    *v4 |= 4u;
    v5 = &gSprites[68 * *((_BYTE *)v2 + 24)];
    *((_WORD *)v5 + 16) = 136;
    *((_WORD *)v5 + 17) = 64;
    v5[62] &= 0xFBu;
    v5[1] = v5[1] & 0xF3 | 4;
    v6 = &gSprites[68 * *((_BYTE *)v2 + 26)];
    *((_WORD *)v6 + 16) = 104;
    *((_WORD *)v6 + 17) = 72;
    v6[62] &= 0xFBu;
    v6[1] = v6[1] & 0xF3 | 4;
    sub_800B534(v1, 2);
    sub_800B6C0(v1, 1);
    MenuDrawTextWindow(2, 13, 27, 18);
    StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_081C7025);
    MenuPrintMessage(&gStringVar4, 3, 14);
    *v2 = (int)task_new_game_prof_birch_speech_part2_7;
  }
  return v8;
}
