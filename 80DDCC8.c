int __fastcall sub_80DDCC8(int a1)
{
  int v1; // r3@1
  int v2; // r2@1
  signed __int16 v3; // r0@3
  __int16 v4; // r1@4
  __int16 v5; // r0@6
  int v7; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 58);
  if ( (signed int)*(_WORD *)(a1 + 58) <= 255 )
  {
    v4 = *(_WORD *)(a1 + 60);
    *(_WORD *)(a1 + 60) = v4 + 1;
    if ( !(_BYTE)v4 )
    {
      *(_WORD *)(a1 + 60) = (v4 + 1) & 0xFF00;
      v5 = (v4 + 1) & 0x100 ? v2 + 1 : v2 - 1;
      *(_WORD *)(v1 + 58) = v5;
      v4000052 = ((16 - *(_WORD *)(v1 + 58)) << 8) | *(_WORD *)(v1 + 58);
      if ( !*(_WORD *)(v1 + 58) || *(_WORD *)(v1 + 58) == 16 )
        *(_WORD *)(v1 + 60) ^= 0x100u;
      if ( !*(_WORD *)(v1 + 58) )
      {
        v3 = 256;
        goto _080DDD4A;
      }
    }
  }
  else
  {
    *(_WORD *)(a1 + 58) = v2 + 1;
    if ( (v2 + 1) << 16 == 17629184 )
    {
      v3 = 0;
_080DDD4A:
      *(_WORD *)(v1 + 58) = v3;
      return v7;
    }
  }
  return v7;
}
