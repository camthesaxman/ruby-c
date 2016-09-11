int __fastcall sub_809E260(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    if ( word_300179E & 0x40 )
    {
      LOWORD(dword_3004B20[10 * a1 + 2]) = 4;
      sub_809E8F0(a1, -1, 33652857);
    }
    else if ( word_300179E & 0x80 )
    {
      LOWORD(dword_3004B20[10 * a1 + 2]) = 4;
      sub_809E8F0(a1, 1, 33652857);
    }
    else if ( word_300179E & 0x20 || (sub_80F9284() & 0xFF) == 1 )
    {
      if ( v201800B == 3 && (v2018079 != 4 || v201807C) )
        MenuZeroFillWindowRect(0, 0xEu, 9u, 0x12u);
      sub_809F134(v1, -1);
    }
    else if ( word_300179E & 0x10 || (sub_80F9284() & 0xFF) == 2 )
    {
      if ( v201800B != v2018076 )
      {
        if ( v201800B == 2 && (v2018079 != 4 || v201807C) )
          MenuZeroFillWindowRect(0, 0xEu, 9u, 0x12u);
        sub_809F134(v1, 1);
      }
    }
    else if ( word_300179E & 1 )
    {
      if ( (sub_809F7D0(v1) & 0xFF) != 1 && v2018079 != 4 )
      {
        audio_play(0x20u);
        sub_809F9D0(v1, v2018079);
      }
      else
      {
        v201807A = v2018079;
        v202E8CE = v2018079;
        sub_809E0FC(v1);
      }
    }
    else if ( word_300179E & 2 )
    {
      v201807A = 4;
      v202E8CE = 4;
      sub_809E0FC(v1);
    }
  }
  return v3;
}
