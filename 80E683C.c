int sub_80E683C()
{
  int i; // r1@2
  int v1; // r0@4
  int v3; // [sp+8h] [bp-4h]@0

  if ( v2001026 )
  {
    v20011AA = 7;
    v20011AB = 6;
    v20011AC = 7;
    v20011AD = 7;
  }
  else
  {
    for ( i = 0; i < v20011B6; i = (i + 1) & 0xFFFF )
      *(_BYTE *)(i + 33558954) = 2;
    v1 = v2001028 & 1;
    *(_BYTE *)(i + 33558953) = v1;
    if ( !v1 )
      *(_BYTE *)(i + 33558953) = 2;
  }
  v20011A8 = 0;
  v20011A9 = 0;
  v20011B5 = 0;
  v20011B7 = 0;
  sub_80E9A4C();
  return v3;
}
