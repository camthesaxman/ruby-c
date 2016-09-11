int __fastcall sub_808BE74(unsigned __int8 a1)
{
  int v1; // r4@1

  v1 = a1;
  if ( word_300179E & 0x10 )
  {
    if ( a1 > 0x12u )
      v1 = 0;
    else
      v1 = (a1 + 1) & 0xFF;
    MenuLoadTextWindowGraphics_OverrideFrameType(v1);
  }
  if ( word_300179E & 0x20 )
  {
    if ( v1 )
      v1 = (v1 - 1) & 0xFF;
    else
      v1 = 19;
    MenuLoadTextWindowGraphics_OverrideFrameType(v1);
  }
  return v1;
}
