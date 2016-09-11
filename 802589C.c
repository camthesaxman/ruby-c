int atk80_manipulatedamage()
{
  signed int v0; // r2@1
  int v1; // r0@7
  int v3; // [sp+4h] [bp-4h]@0

  v0 = *(_BYTE *)(v2024C10 + 1);
  if ( v0 == 1 )
  {
    v2024BEC /= 2;
    if ( !v2024BEC )
      v2024BEC = 1;
    if ( (signed int)((unsigned int)*(_WORD *)(88 * v2024C08 + 0x2024AAC) >> 1) < v2024BEC )
      v2024BEC = (unsigned int)*(_WORD *)(88 * v2024C08 + 0x2024AAC) >> 1;
  }
  else
  {
    if ( v0 > 1 )
    {
      if ( v0 != 2 )
        goto _0802590C;
      v1 = 2 * v2024BEC;
    }
    else
    {
      if ( *(_BYTE *)(v2024C10 + 1) )
        goto _0802590C;
      v1 = -v2024BEC;
    }
    v2024BEC = v1;
  }
_0802590C:
  v2024C10 += 2;
  return v3;
}
