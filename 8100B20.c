int sub_8100B20()
{
  unsigned int v0; // r2@1
  int v1; // r1@2
  int v3; // [sp+Ch] [bp-4h]@0

  v0 = 0;
  if ( (unsigned int)*v202E82C > 0 )
  {
    while ( 1 )
    {
      v1 = 24 * v0 + *(_DWORD *)(v202E82C + 4);
      if ( *(_WORD *)(v1 + 20) == v202E8CC )
        break;
      v0 = (v0 + 1) & 0xFF;
      if ( v0 >= *v202E82C )
        return v3;
    }
    v202E8CE = *(_BYTE *)v1;
  }
  return v3;
}
