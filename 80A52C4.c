signed int __fastcall sub_80A52C4(unsigned __int8 a1, unsigned __int16 a2)
{
  int v2; // r3@1
  unsigned __int16 v3; // r4@1
  _BYTE *v4; // r1@1
  int v5; // r2@1
  signed __int16 v6; // r0@3

  v2 = a2;
  v3 = a2;
  v4 = &byte_3004B28[40 * a1];
  v5 = word_30017A0 & 0xF0;
  if ( v5 == 64 )
  {
    if ( *((_WORD *)v4 + 1) != v2 )
    {
      v6 = *((_WORD *)v4 + 1) + 1;
_080A5340:
      *((_WORD *)v4 + 1) = v6;
      return 1;
    }
_080A533E:
    v6 = 1;
    goto _080A5340;
  }
  if ( v5 == 128 )
  {
    if ( *((_WORD *)v4 + 1) != 1 )
    {
      v6 = *((_WORD *)v4 + 1) - 1;
      goto _080A5340;
    }
    *((_WORD *)v4 + 1) = v2;
    return 1;
  }
  if ( v5 == 16 )
  {
    if ( *((_WORD *)v4 + 1) + 10 < v2 )
    {
      v6 = *((_WORD *)v4 + 1) + 10;
      goto _080A5340;
    }
    *((_WORD *)v4 + 1) = v3;
    return 1;
  }
  if ( v5 == 32 )
  {
    if ( (signed int)*((_WORD *)v4 + 1) > 10 )
    {
      v6 = *((_WORD *)v4 + 1) - 10;
      goto _080A5340;
    }
    goto _080A533E;
  }
  return 0;
}
