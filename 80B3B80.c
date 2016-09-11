int __fastcall sub_80B3B80(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  sav12_xor_increment(0x26u);
  sub_80B79E0(33708996, v20386A0);
  audio_play(0x5Fu);
  sub_80B7BEC(v2025BC4, 0, 0);
  dword_3004B20[10 * v1] = (int)sub_80B3AEC;
  return v3;
}
