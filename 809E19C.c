int __fastcall sub_809E19C(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    if ( word_300179E & 0x40 )
    {
      sub_809F1B8(a1, -1);
    }
    else if ( word_300179E & 0x80 )
    {
      sub_809F1B8(a1, 1);
    }
    else if ( word_300179E & 0x20 || (sub_80F9284() & 0xFF) == 1 )
    {
      sub_809F134(v1, -1);
    }
    else if ( word_300179E & 0x10 || (sub_80F9284() & 0xFF) == 2 )
    {
      sub_809F134(v1, 1);
    }
    else if ( word_300179E & 1 )
    {
      if ( v201800B > 1u )
        sub_809EA50(v1);
      if ( !v201800B )
        sub_809E0FC(v1);
    }
    else if ( word_300179E & 2 )
    {
      sub_809E0FC(v1);
    }
  }
  return v3;
}
