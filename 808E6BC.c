int sub_808E6BC()
{
  unsigned int v0; // r4@1
  int v1; // r2@2
  char *v2; // r1@2
  int v4; // [sp+10h] [bp-4h]@0

  v0 = 0;
  do
  {
    v1 = *(_WORD *)(v202FFB4 + 1566 + 2 * v0);
    v2 = &gSprites[68 * v1];
    if ( !*((_WORD *)v2 + 18) && !*((_WORD *)v2 + 19) && v1 != 0xFFFF )
      *(_WORD *)(v202FFB4 + 1574) = v1;
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 3 );
  return v4;
}
