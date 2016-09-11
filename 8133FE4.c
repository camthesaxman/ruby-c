signed int __fastcall sub_8133FE4(unsigned __int8 a1)
{
  int v1; // r3@1
  unsigned int v2; // r2@1
  _BYTE *v3; // r0@1
  unsigned int v4; // r1@1
  signed int result; // r0@3

  v1 = a1;
  v2 = 0;
  v3 = &gUnknown_08402E40[8 * *((_BYTE *)&gDecorations + 32 * a1 + 19)];
  v4 = v3[4];
  if ( v4 <= 0 )
  {
_08134022:
    result = 0;
  }
  else
  {
    while ( *(_BYTE *)(*(_DWORD *)v3 + v2) != v1 )
    {
      v2 = (v2 + 1) & 0xFF;
      if ( v2 >= v4 )
        goto _08134022;
    }
    result = 1;
  }
  return result;
}
