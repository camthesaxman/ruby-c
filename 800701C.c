_BYTE *__fastcall StringCopyPadded(_BYTE *a1, _BYTE *a2, char a3, int a4)
{
  _BYTE *v4; // r4@1
  _BYTE *v5; // r5@1
  int i; // r3@5

  v4 = a1;
  v5 = a2;
  a4 = (unsigned __int16)a4;
  while ( *v5 != 255 )
  {
    *v4++ = *v5++;
    if ( a4 )
      a4 = (a4 - 1) & 0xFFFF;
  }
  for ( i = (a4 - 1) & 0xFFFF; i != 0xFFFF; i = (i - 1) & 0xFFFF )
    *v4++ = a3;
  *v4 = -1;
  return v4;
}
