int __fastcall sub_8122770(unsigned __int8 a1)
{
  int v1; // r6@1
  unsigned int v2; // r4@1
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  while ( *(_BYTE *)(v2 + 33788528) != (unsigned __int8)byte_3005CE0 + 1 )
  {
    v2 = (v2 + 1) & 0xFF;
    if ( v2 > 2 )
      goto _081227BE;
  }
  *(_BYTE *)(v2 + 33788528) = 0;
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      v2039271 = v2039272;
      v2039272 = 0;
    }
  }
  else
  {
    v2039270 = v2039271;
    v2039271 = v2039272;
    v2039272 = 0;
  }
_081227BE:
  sub_806BC3C((unsigned __int8)byte_3005CE0, 0x70u);
  if ( v2039270 )
    sub_806BC3C((v2039270 - 1) & 0xFF, 0x1Cu);
  if ( v2039271 )
    sub_806BC3C((v2039271 - 1) & 0xFF, 0x2Au);
  sub_8122838(v1);
  return v4;
}
