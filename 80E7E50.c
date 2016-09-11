int sub_80E7E50()
{
  int v0; // r5@1
  int v1; // r2@1
  int v2; // r3@2
  unsigned __int16 i; // [sp+4h] [bp-24h]@2
  int v5; // [sp+24h] [bp-4h]@0

  v0 = 0;
  v1 = 0;
  if ( v2001084 > 0 )
  {
    do
    {
      *(_BYTE *)(v1 + 33558654) = 0;
      v2 = 0;
      for ( i = v1 + 1; v2 < v2001083; v2 = (v2 + 1) & 0xFFFF )
      {
        *(_WORD *)(2 * v0 + 0x200100C) = *(_WORD *)(2 * v0 + v2001004);
        *(_BYTE *)(v2 + 2 * v1 + 33558668) = 0;
        v0 = (v0 + 1) & 0xFFFF;
      }
      v1 = (unsigned __int16)(v1 + 1);
    }
    while ( i < (signed int)v2001084 );
  }
  return v5;
}
