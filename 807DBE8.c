signed int sub_807DBE8()
{
  _WORD *v0; // r3@1
  __int16 v1; // r1@4
  unsigned int v2; // r2@4
  unsigned int v3; // r0@4
  __int16 v4; // r0@5

  v0 = (_WORD *)33750808;
  if ( v202FF18 == v202FF1C )
    return 1;
  ++v202FF21;
  if ( v202FF21 > (unsigned int)v202FF22 )
  {
    v202FF21 = 0;
    if ( ++v202FF20 & 1 )
    {
      v1 = v202FF18;
      v2 = v202FF18;
      v3 = v202FF1C;
      if ( v202FF18 < (unsigned int)v202FF1C )
      {
        v4 = v202FF18 + 1;
_0807DC76:
        *v0 = v4;
        goto _0807DC78;
      }
    }
    else
    {
      v0 = (_WORD *)33750810;
      v1 = v202FF1A;
      v2 = v202FF1A;
      v3 = v202FF1E;
      if ( v202FF1A < (unsigned int)v202FF1E )
      {
        v4 = v202FF1A + 1;
        goto _0807DC76;
      }
    }
    if ( v2 <= v3 )
      goto _0807DC78;
    v4 = v1 - 1;
    goto _0807DC76;
  }
_0807DC78:
  v4000052 = (v202FF1A << 8) | v202FF18;
  if ( v202FF18 != v202FF1C )
    return 0;
  return 1;
}
