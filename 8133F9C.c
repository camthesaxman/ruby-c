signed int __fastcall sub_8133F9C(int a1)
{
  int v1; // r2@1
  _BYTE *v2; // r0@1
  char v3; // r1@2
  signed int result; // r0@3

  LOBYTE(v1) = 0;
  v2 = &gUnknown_08402E40[8 * a1 & 0x7FF];
  if ( (signed int)v2[4] <= 0 )
  {
_08133FD8:
    result = -1;
  }
  else
  {
    while ( 1 )
    {
      v3 = v1;
      if ( !*(_BYTE *)(*(_DWORD *)v2 + (char)v1) )
        break;
      v1 = ((char)v1 + 1) & 0xFF;
      if ( (char)(v3 + 1) >= (signed int)v2[4] )
        goto _08133FD8;
    }
    result = (char)v1;
  }
  return result;
}
