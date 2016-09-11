int __fastcall sub_811866C(int a1)
{
  int v1; // r3@1
  int v2; // r2@1
  int v3; // r2@2
  __int16 v4; // r0@3

  v1 = a1;
  v2 = *(_WORD *)(a1 + 52);
  if ( v2019024 <= (signed int)*(_WORD *)(a1 + 52) )
  {
    v4 = v2 - v2019024;
    goto _081186AA;
  }
  v3 = v2 + 360 - v2019024;
  *(_WORD *)(a1 + 58) = v3;
  if ( v3 << 16 > 23527424 )
  {
    v4 = v3 - 360;
_081186AA:
    *(_WORD *)(v1 + 58) = v4;
  }
  return *(_WORD *)(v1 + 58);
}
