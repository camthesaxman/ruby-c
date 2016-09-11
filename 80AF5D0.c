signed int __fastcall unref_sub_80AF5D0(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r3@1
  char v4; // r0@3
  char v5; // r1@3
  unsigned int v6; // r0@7
  int v7; // r1@10

  v2 = a2;
  if ( a1 != v2038695 )
    return 1;
  v6 = 0;
  do
  {
    if ( v2 == 3 )
    {
      v4 = v201920A;
      v5 = 1;
_080AF5F6:
      v201920A = v4 | v5;
      return 1;
    }
    if ( v2 == 4 )
    {
      v4 = v201920A;
      v5 = 2;
      goto _080AF5F6;
    }
    v7 = *(_BYTE *)(v6 + 33657350);
    if ( v7 == v2 )
      return 1;
    if ( v7 == 255 )
    {
      *(_BYTE *)(v6 + 33657350) = v2;
      return 1;
    }
    v6 = (v6 + 1) & 0xFF;
  }
  while ( v6 <= 3 );
  return 0;
}
