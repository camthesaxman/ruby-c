_BYTE *__fastcall sub_8053818(unsigned __int8 a1)
{
  int v1; // r3@1
  _BYTE *v2; // r1@1
  _BYTE *result; // r0@3
  int v4; // r2@4

  v1 = *v202E834;
  v2 = *(_BYTE **)(v202E834 + 4);
  if ( v2 && (v4 = 0, v1 > 0) )
  {
    while ( *v2 != a1 )
    {
      ++v4;
      v2 += 12;
      if ( v4 >= v1 )
        goto _08053848;
    }
    result = v2;
  }
  else
  {
_08053848:
    result = 0;
  }
  return result;
}
