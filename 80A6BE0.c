int __fastcall sub_80A6BE0(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r4@1
  unsigned int v3; // r5@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1 << 24;
  v2 = v1 >> 24;
  v3 = v1 >> 24;
  if ( (unsigned __int8)sub_80A5350(BYTE3(v1)) != 1 )
  {
    if ( word_300179E & 1 )
    {
      audio_play(5u);
      sub_80A4DA4((int)gBG1TilemapBuffer);
      sub_80A6B64(v2);
    }
    else if ( word_300179E & 2 )
    {
      LOWORD(dword_3004B20[10 * v3 + 7]) = 0;
      sub_80A48E8(v3, byte_3005D10[4 * v2038559], (unsigned __int8)byte_3005D10[4 * v2038559]);
      audio_play(5u);
      sub_80A5D38(v3);
    }
  }
  return v5;
}
