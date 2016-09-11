signed int sub_80E8094()
{
  unsigned int v0; // r5@1
  _BYTE *v1; // r3@2
  _BYTE *v2; // r4@2
  int v3; // r2@4
  int v4; // r1@5

  v0 = 0;
  do
  {
    sub_80EB218(33598996, *(_WORD *)(2 * v0 + 0x200100C), 0);
    sub_80EB218(33599041, (unsigned __int16)gMysteryEventPhrase[v0], 0);
    v1 = (_BYTE *)33598996;
    v2 = (_BYTE *)33599041;
    while ( 1 )
    {
      v3 = *v1;
      if ( v3 == 255 )
        goto _080E80EE;
      v4 = *v2;
      if ( v4 == 255 )
        break;
      ++v2;
      ++v1;
      if ( v3 != v4 )
        return 0;
    }
    if ( *v1 != 255 )
      return 0;
_080E80EE:
    if ( *v2 != 255 )
      return 0;
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 3 );
  return 1;
}
