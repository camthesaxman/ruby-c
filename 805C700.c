int __fastcall sub_805C700(int a1)
{
  int result; // r0@4
  int v2; // r3@5
  int v3; // r0@5
  _BYTE *v4; // r1@5
  int v5; // r2@5

  if ( *(_BYTE *)(a1 + 9) == v2025739 && *(_BYTE *)(a1 + 10) == v2025738 )
  {
    v2 = 0;
    v3 = *(_BYTE *)(a1 + 8);
    v4 = (_BYTE *)33710932;
    v5 = 0;
    while ( v3 != *v4 )
    {
      v4 += 24;
      v5 += 24;
      if ( ++v2 > 63 )
        goto _0805C74A;
    }
    result = v5 + 33710932;
  }
  else
  {
_0805C74A:
    result = 0;
  }
  return result;
}
