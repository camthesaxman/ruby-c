signed int __fastcall unref_sub_80A9260(int a1)
{
  unsigned int v1; // r2@1
  char *v2; // r0@1
  unsigned int v3; // r1@1
  signed int result; // r0@3

  v1 = 0;
  v2 = (char *)gUnknown_083C1618 + (8 * a1 & 0x7FF);
  v3 = (unsigned __int8)v2[4];
  if ( v3 <= 0 )
  {
_080A9292:
    result = -1;
  }
  else
  {
    while ( *(_WORD *)(4 * v1 + *(_DWORD *)v2) )
    {
      v1 = (v1 + 1) & 0xFF;
      if ( v1 >= v3 )
        goto _080A9292;
    }
    result = (char)v1;
  }
  return result;
}
