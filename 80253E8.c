int sub_80253E8()
{
  int v0; // r4@1
  int v2; // [sp+10h] [bp-4h]@0

  v0 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  if ( v20239F8 & 1 )
  {
    ++v2024C08;
    if ( v2024C08 != v2024C07 )
      goto _0802543E;
    do
    {
      do
        ++v2024C08;
      while ( v2024C08 == v2024C07 );
_0802543E:
      ;
    }
    while ( v2024C0C & gBitTable[v2024C08] );
    if ( v2024C08 < (unsigned int)v2024A68 )
      v2024C10 = v0;
    else
      v2024C10 += 5;
  }
  else
  {
    v2024C10 += 5;
  }
  return v2;
}
