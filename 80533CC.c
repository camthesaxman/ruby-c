int sub_80533CC()
{
  int v0; // r1@3
  int v1; // r0@3
  int v3; // [sp+4h] [bp-4h]@0

  if ( v202573A >= 0 && v202573A < (signed int)*(_BYTE *)(v202E82C + 1) )
  {
    v0 = 8 * v202573A;
    v2025734 = *(_WORD *)(v0 + *(_DWORD *)(v202E82C + 8));
    LOWORD(v1) = *(_WORD *)(v0 + *(_DWORD *)(v202E82C + 8) + 2);
_08053434:
    v2025736 = v1;
    return v3;
  }
  if ( v202573C < 0 || v202573E < 0 )
  {
    v2025734 = *v202E828 / 2;
    v1 = *(_DWORD *)(v202E828 + 4) / 2;
    goto _08053434;
  }
  v2025734 = v202573C;
  v2025736 = v202573E;
  return v3;
}
