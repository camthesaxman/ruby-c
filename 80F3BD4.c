int sub_80F3BD4()
{
  unsigned int v0; // r0@2
  unsigned int v1; // r6@2
  int result; // r0@4

  if ( v200BC92 )
  {
    v0 = (((unsigned int)*(_BYTE *)(v2009348 + 63) >> 5) ^ 1) & 1;
    v200BC92 = ((*(_BYTE *)(v2009348 + 63) >> 5) ^ 1) & 1;
    v1 = v0;
    if ( !v0 )
    {
      FreeOamMatrix((unsigned int)*(_BYTE *)(v2009348 + 3) << 26 >> 27);
      DestroySprite(v2009348);
      v2009348 = v1;
    }
    result = v200BC92;
  }
  else
  {
    result = 0;
  }
  return result;
}
