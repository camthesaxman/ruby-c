int sub_8115634()
{
  unsigned __int8 v0; // r1@1
  __int16 v1; // r5@4
  signed __int16 v2; // r1@4
  int v4; // [sp+Ch] [bp-4h]@0

  v0 = v2019021++;
  if ( v0 == v2019023 )
  {
    v2019021 = 0;
    v2019024 -= v2019022;
    if ( v2019024 & 0x8000 )
      v2019024 = 360 - v2019022;
  }
  v1 = sine2(v2019024);
  v2 = cosine2(v2019024);
  v2019032 = v2 / 16;
  v201902C = v2 / 16;
  v201902E = (unsigned int)(v1 + (v1 < 0 ? 0xF : 0)) >> 4;
  v2019030 = -v201902E;
  return v4;
}
