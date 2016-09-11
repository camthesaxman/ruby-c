signed int __fastcall sub_80828B8(_WORD *a1, unsigned __int16 a2)
{
  int v2; // r5@1
  int v3; // r4@1
  _WORD *v4; // r2@1
  int v5; // r1@2
  int v6; // r3@3

  v2 = a2;
  v3 = 0;
  v4 = a1;
  while ( 1 )
  {
    v5 = 0;
    if ( *v4 )
      break;
_080828E8:
    v4 += 8;
    if ( ++v3 > 55 )
      return -1;
  }
  v6 = 0;
  while ( v4[v6] != v2 )
  {
    ++v6;
    if ( ++v5 > 4 || !v4[v6] )
      goto _080828E8;
  }
  return v3;
}
