signed int sub_80F2360()
{
  int v0; // r4@1
  unsigned int v1; // r1@3
  signed int result; // r0@5

  v0 = 0;
  if ( v200030E <= 0 )
  {
_080F23C0:
    result = 1;
  }
  else
  {
    while ( v0 == v2006DAD )
    {
_080F23B6:
      v0 = (v0 + 1) & 0xFFFF;
      if ( v0 >= v200030E )
        goto _080F23C0;
    }
    v1 = 0;
    while ( !*(_DWORD *)(4 * v1 + 16 * v0 + 0x2000320) )
    {
      v1 = (v1 + 1) & 0xFFFF;
      if ( v1 > 3 )
        goto _080F23B6;
    }
    result = 0;
  }
  return result;
}
