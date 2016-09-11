int atk67_8025ECC()
{
  char v0; // r4@1
  int v1; // r0@7
  int v2; // r0@10
  int v4; // [sp+8h] [bp-4h]@0

  v0 = v2024D1E;
  if ( v2024D1E )
  {
    if ( v2024D1E != 1 )
      return v4;
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
    if ( word_300179E & 2 )
    {
      v2024D1F = 1;
_08024684:
      audio_play(5);
      sub_8023AD8();
      ++v2024C10;
      return v4;
    }
    if ( word_300179E & 1 )
      goto _08024684;
  }
  else
  {
    sub_8023A80();
    ++v2024D1E;
    v2024D1F = v0;
    sub_802BC6C();
  }
  return v4;
}
