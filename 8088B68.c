int sub_8088B68()
{
  unsigned __int8 v0; // r0@1
  int v1; // r4@1
  char *v2; // r2@1

  v0 = CreateSprite(137842700, 120, 0);
  v1 = v0;
  v2 = &gSprites[68 * v0];
  v2[5] = v2[5] & 3 | 4;
  *((_DWORD *)v2 + 7) = sub_8088BC4;
  *((_WORD *)v2 + 24) = v202FF84;
  audio_play(0x9Eu);
  return v1;
}
