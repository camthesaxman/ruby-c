int __fastcall sub_808BCB4(unsigned __int8 a1)
{
  int v1; // r3@1

  v1 = a1;
  if ( word_300179E & 0x10 )
  {
    if ( a1 > 1u )
      v1 = 0;
    else
      v1 = (a1 + 1) & 0xFF;
  }
  if ( word_300179E & 0x20 )
  {
    if ( v1 )
      v1 = (v1 - 1) & 0xFF;
    else
      v1 = 2;
  }
  return v1;
}
