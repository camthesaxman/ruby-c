int sub_812C01C()
{
  unsigned __int8 v0; // r0@1
  int v2; // [sp+4h] [bp-4h]@0

  audio_play(0xECu);
  v0 = GetPlayerAvatarObjectId();
  BeginNormalPaletteFade(~(1 << (((unsigned __int8)gSprites[68 * v0 + 5] >> 4) + 16)), 4, 0, 8u, 31);
  LOWORD(dword_3004B20[10 * (unsigned __int8)CreateTask((int)sub_812C084, 0) + 2]) = 0;
  FieldEffectActiveListRemove(0x33u);
  return v2;
}
