int __fastcall sub_80BE8EC(unsigned __int16 a1)
{
  unsigned int v1; // r4@1
  unsigned int v2; // r3@2
  unsigned int v3; // r0@5
  int v5; // [sp+10h] [bp-4h]@0

  v1 = a1;
  if ( !v2028230 )
  {
    v2 = 0;
    while ( *(_BYTE *)(36 * v2 + 0x2027E6C) != 41 || *(_BYTE *)(36 * v2 + 0x2027E6D) != 1 )
    {
      v2 = (v2 + 1) & 0xFF;
      if ( v2 > 0x17 )
        return v5;
    }
    v3 = *(_WORD *)(36 * v2 + 0x2027E82);
    if ( v3 >= v1 )
      *(_WORD *)(36 * v2 + 0x2027E82) = v3 - v1;
    else
      *(_WORD *)(36 * v2 + 0x2027E82) = 0;
  }
  return v5;
}
