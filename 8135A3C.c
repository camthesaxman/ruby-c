int sub_8135A3C()
{
  int v0; // r4@1
  unsigned int v1; // r5@1
  _WORD *v2; // r4@1
  unsigned int v3; // r5@4
  signed __int16 v4; // r1@4
  int v6; // [sp+Ch] [bp-4h]@0

  v0 = v20253F8 & 1;
  v1 = (unsigned __int16)sub_8135D3C(v0);
  v2 = (_WORD *)(2 * v0 + 33707012);
  if ( *v2 < v1 )
    *v2 = v1;
  if ( v2025404 <= (unsigned int)v2025406 )
  {
    v3 = v2025406;
    sav12_xor_set(0x20u, v2025406);
    v4 = 9999;
    if ( v3 <= 0x270F )
    {
_08135AB4:
      v2025416 = v3;
      return v6;
    }
  }
  else
  {
    v3 = v2025404;
    sav12_xor_set(0x20u, v2025404);
    v4 = 9999;
    if ( v3 <= 0x270F )
      goto _08135AB4;
  }
  v2025416 = v4;
  return v6;
}
