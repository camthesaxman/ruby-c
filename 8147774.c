_BOOL4 sub_8147774()
{
  signed __int16 v0; // r1@1

  v0 = 255;
  if ( v2024EB7 == 1 )
    v0 = 1023;
  if ( v2024EB7 == 2 )
    v0 |= 0x200u;
  return (unsigned __int16)(v0 & word_300179E) != 0;
}
