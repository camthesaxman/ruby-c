int __fastcall audio_play_and_stuff(unsigned __int16 a1, char a2)
{
  char v2; // r4@1
  int v4; // [sp+10h] [bp-4h]@0

  v2 = a2;
  m4aSongNumStart(a1);
  m4aMPlayImmInit(&unk_30073C0);
  m4aMPlayImmInit(&unk_3007400);
  m4aMPlayPanpotControl(&unk_30073C0, 0xFFFF, v2);
  m4aMPlayPanpotControl(&unk_3007400, 0xFFFF, v2);
  return v4;
}
