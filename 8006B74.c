int __fastcall StringCompare(_BYTE *a1, _BYTE *a2)
{
  _BYTE *v2; // r2@1
  int v4; // r0@5

  v2 = a1;
  while ( 1 )
  {
    v4 = *v2;
    if ( v4 != *a2 )
      break;
    if ( v4 == 255 )
      return 0;
    ++v2;
    ++a2;
  }
  return *v2 - *a2;
}
