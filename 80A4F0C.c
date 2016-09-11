signed int sub_80A4F0C()
{
  char v0; // r0@4
  unsigned __int8 v1; // r1@4

  if ( (((unsigned __int8)byte_3000701 - 4) & 0xFFu) > 1 )
  {
    if ( word_300179E == 16 || (sub_80F9284() & 0xFF) == 2 )
    {
      v0 = 1;
      v1 = 2;
_080A4F58:
      sub_80A4E8C(v0, v1);
      return 1;
    }
    if ( word_300179E == 32 || (sub_80F9284() & 0xFF) == 1 )
    {
      v0 = -1;
      v1 = 1;
      goto _080A4F58;
    }
  }
  return 0;
}
