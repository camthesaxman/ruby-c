signed int sub_8103E38()
{
  unsigned int v0; // r2@1
  char *v1; // r1@2

  v0 = 0;
  do
  {
    v1 = &gSprites[68 * *(_BYTE *)(v0 + 33554500)];
    if ( *((_WORD *)v1 + 24) && *((_WORD *)v1 + 25) )
      return 0;
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 4 );
  return 1;
}
