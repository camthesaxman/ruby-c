int sub_80E5C2C()
{
  unsigned int v0; // r6@1
  int v1; // r5@1
  int *v2; // r4@2

  v0 = 0;
  v1 = 0;
  do
  {
    v2 = &gUnknown_083DB608[v1];
    if ( (v202E864 & gUnknown_083DB608[v1 + 2]) == gUnknown_083DB608[v1]
      && (v202E868 & gUnknown_083DB608[v1 + 3]) == v2[1]
      && sub_80E5BC8((_BYTE *)v2[4], (_BYTE *)v2[5]) << 24 )
    {
      return *((_BYTE *)v2 + 24);
    }
    v1 += 7;
    ++v0;
  }
  while ( v0 <= 3 );
  return 0;
}
