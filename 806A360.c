int InTrainerHill()
{
  int v1; // [sp+4h] [bp-4h]@0

  if ( FlagGet(0x835u) << 24 )
  {
    RtcCalcLocalTime();
    sub_806A390(&word_3004038);
    sub_806A3F4(&word_3004038);
  }
  return v1;
}
