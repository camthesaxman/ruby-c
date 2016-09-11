signed int sub_80FAD04()
{
  signed int v0; // r4@1
  int v1; // r12@1
  int v2; // r0@18

  v0 = 0;
  v1 = v20388CC;
  *(_WORD *)(v20388CC + 106) = 0;
  *(_WORD *)(v1 + 104) = 0;
  if ( word_300179C & 0x40 && (signed int)*(_WORD *)(v1 + 94) > -52 )
  {
    *(_WORD *)(v1 + 104) = -1;
    v0 = 1;
  }
  if ( word_300179C & 0x80 && (signed int)*(_WORD *)(v20388CC + 94) <= 59 )
  {
    *(_WORD *)(v20388CC + 104) = 1;
    v0 = 1;
  }
  if ( word_300179C & 0x20 && (signed int)*(_WORD *)(v20388CC + 92) > -44 )
  {
    *(_WORD *)(v20388CC + 106) = -1;
    v0 = 1;
  }
  if ( word_300179C & 0x10 && (signed int)*(_WORD *)(v20388CC + 92) <= 171 )
  {
    *(_WORD *)(v20388CC + 106) = 1;
    v0 = 1;
  }
  if ( word_300179E & 1 )
    v0 = 4;
  if ( word_300179E & 2 )
    v0 = 5;
  if ( v0 == 1 )
  {
    v2 = v20388CC;
    *(_DWORD *)(v20388CC + 24) = sub_80FADE4;
    *(_WORD *)(v2 + 108) = 0;
  }
  return v0;
}
