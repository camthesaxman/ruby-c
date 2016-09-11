int sub_8049D44()
{
  char *v0; // r0@2
  int v2; // [sp+0h] [bp-4h]@0

  if ( word_300179E & 1 )
  {
    audio_play(5);
    sub_804A840(0);
    sub_804A840(1);
    *(_BYTE *)(dword_3004824 + 123) = 0;
    v0 = &gSprites[68 * *(_BYTE *)(dword_3004824 + 64) + 62];
    *v0 &= 0xFBu;
  }
  return v2;
}
