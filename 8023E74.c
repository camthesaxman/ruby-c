int atk5B_80256E0()
{
  char v0; // r4@1
  int v1; // r0@7
  int v2; // r0@10
  int v4; // [sp+8h] [bp-4h]@0

  v0 = v201601A;
  if ( v201601A )
  {
    if ( v201601A == 1 )
    {
      if ( word_300179E & 0x40 && v2024D1F )
      {
        v1 = audio_play(5);
        nullsub_6(v1);
        v2024D1F = 0;
        sub_802BC6C();
      }
      if ( word_300179E & 0x80 && !v2024D1F )
      {
        v2 = audio_play(5);
        nullsub_6(v2);
        v2024D1F = 1;
        sub_802BC6C();
      }
      if ( word_300179E & 1 )
      {
        audio_play(5);
        if ( v2024D1F )
          v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
        else
          v2024C10 += 5;
        sub_8023AD8();
      }
      else if ( word_300179E & 2 )
      {
        audio_play(5);
        v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
        sub_8023AD8();
      }
    }
  }
  else
  {
    sub_8023A80();
    ++v201601A;
    v2024D1F = v0;
    sub_802BC6C();
  }
  return v4;
}
