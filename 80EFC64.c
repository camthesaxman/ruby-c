signed int sub_80EFC64()
{
  int v0; // r8@2
  int v1; // r7@2
  unsigned int v2; // r2@2
  int *v3; // r3@2
  int v4; // r6@3
  int v5; // r4@4
  int v6; // r5@4
  unsigned int v7; // ST00_4@4
  int *v8; // ST04_4@4
  signed int result; // r0@8

  if ( v200BC9A > 0xFu )
    goto LABEL_12;
  v0 = v200BC9A;
  v1 = v200BC9B;
  v2 = 0;
  v3 = &gUnknown_083DFEC4;
  do
  {
    v4 = 4 * v2 + 8 * v0;
    if ( *(_DWORD *)&gPokenavCityMaps[v4] )
    {
      v5 = *v3;
      v6 = *v3 + 200 * v1 + 48284;
      v7 = v2;
      v8 = v3;
      LZ77UnCompVram(*(_DWORD *)&gPokenavCityMaps[v4], v6);
      *(_DWORD *)(v5 + 52684 + v4) = v6;
      v1 = (v1 + 1) & 0xFFFF;
      v2 = v7;
      v3 = v8;
    }
    else
    {
      *(_DWORD *)(*v3 + 52684 + v4) = 0;
    }
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 <= 1 );
  ++v200BC9A;
  if ( v200BC9A > 0xFu )
  {
LABEL_12:
    result = 0;
  }
  else
  {
    v200BC9B = v1;
    result = 1;
  }
  return result;
}
