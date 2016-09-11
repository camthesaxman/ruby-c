_BYTE *__fastcall StringCopy(_BYTE *a1, _BYTE *a2)
{
  _BYTE *v2; // r3@1

  v2 = a1;
  while ( *a2 != 255 )
    *v2++ = *a2++;
  *v2 = -1;
  return v2;
}
