int sub_80FBA18()
{
  int v0; // r0@4
  unsigned int v1; // r4@6
  int v2; // r5@6
  int v3; // r6@6
  int v5; // [sp+Ch] [bp-4h]@0

  if ( *(_WORD *)(v20388CC + 20) == 88 )
  {
    *(_BYTE *)(v20388CC + 23) = 0;
  }
  else
  {
    if ( *(_BYTE *)(v20388CC + 120) )
      v0 = v20388CC + 100;
    else
      v0 = v20388CC + 84;
    v1 = *(_WORD *)v0;
    v2 = *(_WORD *)(v0 + 2);
    v3 = 0;
    while ( 1 )
    {
      while ( v1 > 1 )
      {
        v1 = (v1 - 1) & 0xFFFF;
        if ( (unsigned __int16)sub_80FB2EC(v1, v2) == *(_WORD *)(v20388CC + 20) )
          v3 = (v3 + 1) & 0xFFFF;
      }
      if ( !(sub_80FBAA0(v2) << 24) )
        break;
      v2 = (v2 - 1) & 0xFFFF;
      v1 = 29;
    }
    *(_BYTE *)(v20388CC + 23) = v3;
  }
  return v5;
}
