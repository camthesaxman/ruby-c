signed int sub_80FAB78()
{
  signed int v0; // r4@1

  v0 = 0;
  *(_BYTE *)(v20388CC + 123) = 0;
  *(_BYTE *)(v20388CC + 124) = 0;
  if ( word_300179C & 0x40 && (unsigned int)*(_WORD *)(v20388CC + 86) > 2 )
  {
    *(_BYTE *)(v20388CC + 124) = -1;
    v0 = 1;
  }
  if ( word_300179C & 0x80 && (unsigned int)*(_WORD *)(v20388CC + 86) <= 0xF )
  {
    *(_BYTE *)(v20388CC + 124) = 1;
    v0 = 1;
  }
  if ( word_300179C & 0x20 && (unsigned int)*(_WORD *)(v20388CC + 84) > 1 )
  {
    *(_BYTE *)(v20388CC + 123) = -1;
    v0 = 1;
  }
  if ( word_300179C & 0x10 && (unsigned int)*(_WORD *)(v20388CC + 84) <= 0x1B )
  {
    *(_BYTE *)(v20388CC + 123) = 1;
    v0 = 1;
  }
  if ( word_300179E & 1 )
  {
    v0 = 4;
  }
  else if ( word_300179E & 2 )
  {
    v0 = 5;
  }
  if ( v0 == 1 )
  {
    *(_BYTE *)(v20388CC + 122) = 4;
    *(_DWORD *)(v20388CC + 24) = swiopen;
  }
  return v0;
}
