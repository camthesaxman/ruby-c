int CB2_PrintErrorMessage()
{
  int v1; // [sp+40h] [bp-4h]@0

  if ( byte_3001BAC == 30 )
    goto LABEL_16;
  if ( (signed int)(unsigned __int8)byte_3001BAC <= 30 )
  {
    if ( !byte_3001BAC )
      sub_80729D8(&gUnknown_0842C34C, 20, 56, 1);
    goto LABEL_11;
  }
  if ( byte_3001BAC == 60 )
  {
LABEL_16:
    audio_play(22);
    goto LABEL_11;
  }
  if ( byte_3001BAC == 90 )
    audio_play(22);
LABEL_11:
  if ( (unsigned __int8)byte_3001BAC != 200 )
    ++byte_3001BAC;
  return v1;
}
