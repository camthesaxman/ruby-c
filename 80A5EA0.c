int __fastcall sub_80A5EA0(int a1)
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
      sub_80A5DA0(v203855E, HIWORD(dword_3004B20[10 * v2 + 2]));
      sub_80F914C(v2, &gUnknown_083C16F4);
    }
    else if ( word_300179E & 2 )
    {
      audio_play(5u);
      sub_80A5D38(v3);
    }
  }
  return v5;
}
