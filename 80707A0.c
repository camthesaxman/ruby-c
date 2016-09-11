int __fastcall sub_80707A0(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( ducking_tick(0) << 24 && !v202E8F6 && (word_300179E & 1 || word_300179E & 2) )
  {
    audio_play(5);
    sub_8070848(v1);
    dword_3004B20[10 * v1] = (int)sub_8070800;
  }
  return v3;
}
