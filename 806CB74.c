int __fastcall sub_806CB74(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r1@13
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( word_30017A0 == 32 )
  {
    sub_806CAFC(v2001000, -2);
  }
  else if ( (signed int)(unsigned __int16)word_30017A0 > 32 )
  {
    if ( word_30017A0 == 64 )
    {
      sub_806CAFC(v2001000, -1);
    }
    else if ( word_30017A0 == 128 )
    {
      sub_806CAFC(v2001000, 1);
    }
  }
  else if ( word_30017A0 == 16 )
  {
    sub_806CAFC(v2001000, 2);
  }
  if ( word_300179E & 1 )
  {
    audio_play(5);
    v2 = v200100C;
    dword_3004B20[10 * v1] = v200100C;
    call_via_r1(v1, v2);
  }
  else if ( word_300179E == 2 )
  {
    audio_play(5);
    sub_806CD44(v1);
  }
  return v4;
}
