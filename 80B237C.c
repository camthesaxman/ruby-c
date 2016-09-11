int __fastcall sub_80B237C(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  word_30042C0 = 0;
  word_30041B4 = 160;
  audio_play_and_stuff(0x62u, 0);
  dword_3004B20[10 * v1] = (int)sub_80B23BC;
  return v3;
}
