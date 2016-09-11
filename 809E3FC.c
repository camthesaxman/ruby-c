int __fastcall sub_809E3FC(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r7@1
  int v4; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = a1;
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
    else if ( word_300179E & 1 )
    {
      if ( v2018079 == 4 || v201807B )
      {
        audio_play(5u);
        sub_809EAC8(v2);
      }
      else if ( sub_809E508(33652752) << 24 )
      {
        audio_play(5u);
        v201807A = v2018079;
        sub_80A1B40(1);
        sub_80A1A30(19);
        dword_3004B20[10 * v1] = (int)sub_809E534;
      }
      else
      {
        audio_play(0x20u);
      }
    }
    else if ( word_300179E & 2 )
    {
      audio_play(5u);
      sub_809EAC8(v2);
    }
  }
  return v4;
}
