int sub_80E68E8()
{
  int v0; // r6@2
  int j; // r1@2
  _BYTE *v2; // r2@4
  int v3; // r0@4
  signed int v4; // r3@4
  int v5; // r6@5
  int i; // r1@5
  int v7; // r0@8
  int v9; // [sp+Ch] [bp-4h]@0

  sub_80EB0B0();
  if ( v2001026 )
  {
    v5 = v20011B8;
    v200AA28 = (*(_WORD *)(2 * v20011B8 + 0x2005142) + 1) >> 1;
    for ( i = 0; i < v200AA28; i = (i + 1) & 0xFFFF )
      *(_BYTE *)(i + 33597862) = 2;
    v2 = (_BYTE *)(((i - 1) & 0xFFFF) + 33597862);
    v3 = 2 * v5;
    v4 = 16706;
  }
  else
  {
    v0 = v20011B8;
    v200AA28 = (*(_WORD *)(2 * v20011B8 + 0x2005178) + 1) >> 1;
    for ( j = 0; j < v200AA28; j = (j + 1) & 0xFFFF )
      *(_BYTE *)(j + 33597862) = 2;
    v2 = (_BYTE *)(((j - 1) & 0xFFFF) + 33597862);
    v3 = 2 * v0;
    v4 = 16760;
  }
  v7 = *(_WORD *)(v3 + v4 + 33558528) & 1;
  *v2 = v7;
  if ( !v7 )
    *v2 = 2;
  v200A9A4 = 0;
  v200A9A5 = 0;
  v200AA29 = 0;
  sub_80E9A4C();
  return v9;
}
