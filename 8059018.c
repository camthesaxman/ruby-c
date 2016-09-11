int __fastcall check_acro_bike_metatile(int a1, int a2, unsigned __int8 a3, _BYTE *a4)
{
  _BYTE *v4; // r6@1
  int v5; // r5@1
  unsigned int v6; // r4@1
  int v8; // [sp+10h] [bp-4h]@0

  v4 = a4;
  v5 = a3;
  v6 = 0;
  while ( !(call_via_r1(v5, gUnknown_0830FBF8[v6]) << 24) )
  {
    v6 = (v6 + 1) & 0xFF;
    if ( v6 > 4 )
      return v8;
  }
  *v4 = gUnknown_0830FC0C[v6];
  return v8;
}
