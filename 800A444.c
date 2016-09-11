int __fastcall task_new_game_prof_birch_speech_6(unsigned __int8 a1)
{
  int *v1; // r4@1
  int v2; // r0@1
  char *v3; // r2@1
  int v5; // [sp+18h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_BYTE *)v1 + 26);
  v3 = &gSprites[68 * v2];
  *((_WORD *)v3 + 16) = 104;
  *((_WORD *)v3 + 17) = 72;
  v3[62] &= 0xFBu;
  *((_WORD *)v3 + 23) = 0;
  CreatePokeballSprite(v2, (unsigned int)(unsigned __int8)v3[5] >> 4, 112, 58);
  *v1 = (int)task_new_game_prof_birch_speech_7;
  *((_WORD *)v1 + 11) = 0;
  return v5;
}
