int sub_81347F8()
{
  int v0; // r6@1
  _BYTE *v1; // r0@2
  char v2; // r1@2
  int v3; // r7@3
  unsigned int v4; // r2@6
  int v5; // r1@6
  int v6; // r1@12
  _WORD *v7; // r6@4
  int v8; // r1@18
  unsigned int v9; // r0@23
  int v11; // [sp+1Ch] [bp-4h]@0

  v0 = v20253F8 & 1;
  if ( sub_81346F4() << 24 )
  {
    sub_81349FC(v2025408);
    v1 = (_BYTE *)(*(_WORD *)(2 * v0 + 0x20253FC) + 33707021);
    v2 = v2025408;
_081349DC:
    *v1 = v2;
    return v11;
  }
  v3 = 2 * v0;
  if ( (unsigned int)*(_WORD *)(2 * v0 + 0x2025400) <= 7 )
  {
    if ( *(_WORD *)(2 * v0 + 0x20253FC) == 7 )
    {
      do
      {
        v4 = ((5 * (unsigned int)(unsigned __int8)Random() >> 7) + 10 * (*(_WORD *)(2 * v0 + 0x2025400) - 1) + 20) & 0xFFFF;
        v5 = 0;
        if ( *(_WORD *)(2 * v0 + 0x20253FC) - 1 > 0 && v202540E != v4 )
        {
          do
            ++v5;
          while ( v5 < *(_WORD *)(2 * v0 + 0x20253FC) - 1 && *(_BYTE *)(v5 + 33707022) != v4 );
        }
      }
      while ( v5 != *(_WORD *)(2 * v0 + 0x20253FC) - 1 );
    }
    else
    {
      do
      {
        v4 = ((5 * (unsigned int)(unsigned __int8)Random() >> 6) + 10 * (*(_WORD *)(2 * v0 + 0x2025400) - 1)) & 0xFFFF;
        v6 = 0;
        if ( *(_WORD *)(2 * v0 + 0x20253FC) - 1 > 0 && v202540E != v4 )
        {
          do
            ++v6;
          while ( v6 < *(_WORD *)(2 * v0 + 0x20253FC) - 1 && *(_BYTE *)(v6 + 33707022) != v4 );
        }
      }
      while ( v6 != *(_WORD *)(2 * v0 + 0x20253FC) - 1 );
    }
  }
  else
  {
    v7 = (_WORD *)(v3 + 33707004);
    do
    {
      v4 = ((30 * (unsigned __int8)Random() >> 8) + 70) & 0xFFFF;
      v8 = 0;
      if ( *v7 - 1 > 0 && v202540E != v4 )
      {
        do
          ++v8;
        while ( v8 < *(_WORD *)(v3 + 33707004) - 1 && *(_BYTE *)(v8 + 33707022) != v4 );
      }
    }
    while ( v8 != *v7 - 1 );
  }
  v2025408 = v4;
  sub_81349FC((unsigned __int8)v4);
  v9 = *(_WORD *)(v3 + 33707004);
  if ( v9 <= 6 )
  {
    v1 = (_BYTE *)(v9 + 33707021);
    v2 = v2025408;
    goto _081349DC;
  }
  return v11;
}
