int __fastcall sub_8100174(unsigned __int8 a1)
{
  unsigned int v1; // r3@1
  unsigned int v2; // r3@5
  _BYTE *v3; // r2@5
  _BYTE *v4; // r1@9
  unsigned int v5; // r3@11
  int v7; // [sp+Ch] [bp-4h]@0

  v1 = 0;
  if ( v201F008 > 0u )
  {
    while ( *(_BYTE *)(v201F000 + v1) )
    {
      v1 = (v1 + 1) & 0xFFFF;
      if ( v1 >= v201F008 )
        goto _0810019A;
    }
    *(_BYTE *)(v201F000 + v1) = *(_BYTE *)(v20388D0 + v20388F5);
    *(_BYTE *)(v201F004 + v1) = 16 * (LOBYTE(dword_3004B20[10 * a1 + 2]) - 7) + BYTE2(dword_3004B20[10 * a1 + 2]) - 7;
  }
_0810019A:
  if ( v201F009 )
  {
    v5 = 0;
    v3 = (_BYTE *)33786086;
    if ( !v20388E6 )
    {
_08100210:
      *v3 = v20388F5 + 1;
      return v7;
    }
    while ( 1 )
    {
      v5 = (v5 + 1) & 0xFFFF;
      if ( v5 > 0xB )
        break;
      v4 = (_BYTE *)(v5 + 33786086);
      if ( !*(_BYTE *)(v5 + 33786086) )
      {
_08100236:
        *v4 = v20388F5 + 1;
        return v7;
      }
    }
  }
  else
  {
    v2 = 0;
    v3 = (_BYTE *)33786070;
    if ( !v20388D6 )
      goto _08100210;
    while ( 1 )
    {
      v2 = (v2 + 1) & 0xFFFF;
      if ( v2 > 0xF )
        break;
      v4 = (_BYTE *)(v2 + 33786070);
      if ( !*(_BYTE *)(v2 + 33786070) )
        goto _08100236;
    }
  }
  return v7;
}
