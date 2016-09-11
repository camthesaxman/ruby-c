_BOOL4 sub_80723D4()
{
  return word_300179E & 0x40 && byte_30006B2 < (signed int)(unsigned __int8)byte_30006B5
      || word_300179E & 0x80 && byte_30006B2 >= byte_30006B4 - ((unsigned __int8)byte_30006B5 - 1)
      || word_300179E & 0x20
      && ((byte_30006B2 - byte_30006B2 % (signed int)(unsigned __int8)byte_30006B5) % (unsigned __int8)byte_30006B5 == 1
       || !byte_30006B2
       || !(byte_30006B2 % (signed int)(unsigned __int8)byte_30006B5))
      || word_300179E & 0x10
      && byte_30006B2 % (signed int)(unsigned __int8)byte_30006B5 == (unsigned __int8)byte_30006B5 - 1;
}
