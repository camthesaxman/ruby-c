int __fastcall pause_music_for_sound_maybe(unsigned __int8 a1)
{
  int v1; // r4@1
  __int16 *v2; // r4@1
  int v3; // r0@1
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  m4aMPlayStop(&unk_3007380);
  v2 = &gUnknown_0837DEF4[2 * v1];
  v3 = (unsigned __int16)*v2;
  word_30006DA = v2[1];
  m4aSongNumStart(v3);
  return v5;
}
