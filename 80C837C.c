int sub_80C837C()
{
  unsigned int v0; // r5@1
  signed __int16 v2; // [sp+0h] [bp-18h]@1
  int v3; // [sp+14h] [bp-4h]@11

  PlayerGetDestCoords(&v2, &v2 + 1);
  v0 = 0;
  do
  {
    if ( v2025739 == *(_BYTE *)(16 * v0 + 0x2038810) )
    {
      v2 -= *(_WORD *)(16 * v0 + 0x203880C);
      *(&v2 + 1) -= *(_WORD *)(16 * v0 + 0x203880E);
      if ( v2 < 0 )
        v2 = -v2;
      if ( *(&v2 + 1) < 0 )
        *(&v2 + 1) = -*(&v2 + 1);
      if ( v2 + *(&v2 + 1) <= 5 )
      {
        v202E8DC = v0;
        return v3;
      }
    }
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 9 );
  v202E8DC = -1;
  return v3;
}
