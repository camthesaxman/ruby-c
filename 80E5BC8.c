signed int __fastcall sub_80E5BC8(_BYTE *a1, _BYTE *a2)
{
  int v2; // r2@1
  int v3; // r2@4

  v2 = 0;
  if ( *a1 )
  {
    while ( *(_BYTE *)(v2 + 33745004) <= (unsigned int)a1[v2] )
    {
      v2 = (v2 + 1) & 0xFF;
      if ( !a1[v2] )
        goto _080E5BF2;
    }
    return 0;
  }
_080E5BF2:
  v3 = 0;
  if ( *a2 )
  {
    while ( *(_BYTE *)(v3 + 33745012) <= (unsigned int)a2[v3] )
    {
      v3 = (v3 + 1) & 0xFF;
      if ( !a2[v3] )
        return 1;
    }
    return 0;
  }
  return 1;
}
