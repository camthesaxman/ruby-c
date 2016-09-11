int sub_80B74B0()
{
  unsigned int v0; // r1@1
  int v2; // [sp+4h] [bp-4h]@0

  v0 = 0;
  if ( (unsigned int)*(_BYTE *)(v2000034 + 1) > 0 )
  {
    while ( !*(_BYTE *)(v0 + 33554449) || *(_BYTE *)(v0 + 33554449) == 255 )
    {
      v0 = (v0 + 1) & 0xFF;
      if ( v0 >= *(_BYTE *)(v2000034 + 1) )
        return v2;
    }
    StringCopyN(v2000038, 33554449, (*(_BYTE *)(v2000034 + 1) + 1) & 0xFF);
  }
  return v2;
}
