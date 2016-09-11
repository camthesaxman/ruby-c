int sub_808E82C()
{
  unsigned int v0; // r5@1
  int v1; // r0@2
  _WORD *v2; // r1@3
  bool v3; // zf@3

  v0 = 0;
  do
  {
    v1 = *(_WORD *)(v202FFB4 + 1566 + 2 * v0);
    if ( v1 != 0xFFFF )
    {
      DestroySprite((int)&gSprites[68 * v1]);
      v2 = (_WORD *)(v202FFB4 + 1566 + 2 * v0);
      v3 = (*v2 | 0xFFFF) == 0;
      *v2 = -1;
    }
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 3 );
  return 0;
}
