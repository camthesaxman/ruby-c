unsigned int sub_80F849C()
{
  unsigned int v0; // r1@1

  v0 = 0;
  if ( v20284CC )
  {
    do
      v0 = (v0 + 1) & 0xFF;
    while ( v0 <= 3 && *(_BYTE *)(v0 + 33719500) );
  }
  return v0;
}
