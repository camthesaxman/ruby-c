int UpdateFieldObjectCoordsForCameraUpdate()
{
  unsigned int v0; // r3@2
  __int16 v1; // r4@2
  __int16 v2; // r1@2
  int *v3; // r2@3
  int v5; // [sp+8h] [bp-4h]@0

  if ( v202E844 & 1 )
  {
    v0 = 0;
    v1 = v202E848;
    v2 = v202E84C;
    do
    {
      v3 = &dword_30048A0[9 * v0];
      if ( *(_BYTE *)v3 << 31 )
      {
        *((_WORD *)v3 + 6) -= v1;
        *((_WORD *)v3 + 7) -= v2;
        *((_WORD *)v3 + 8) -= v1;
        *((_WORD *)v3 + 9) -= v2;
        *((_WORD *)v3 + 10) -= v1;
        *((_WORD *)v3 + 11) -= v2;
      }
      v0 = (v0 + 1) & 0xFF;
    }
    while ( v0 <= 0xF );
  }
  return v5;
}
