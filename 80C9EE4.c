int __fastcall sub_80C9EE4(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  audio_play(2u);
  dword_3004B20[10 * v1] = (int)sub_80C9F10;
  return v3;
}
