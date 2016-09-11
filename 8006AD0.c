_BYTE *__fastcall StringAppend(_BYTE *a1, _BYTE *a2)
{
  _BYTE *i; // r2@1

  for ( i = a1; *i != 255; ++i )
    ;
  return StringCopy(i, a2);
}
