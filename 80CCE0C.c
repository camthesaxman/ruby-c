int __fastcall sub_80CCE0C(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  __int16 v3; // r5@2
  signed int v4; // r2@2
  __int16 v5; // r2@5
  __int16 v6; // r0@7
  __int16 v7; // r2@8
  __int16 v8; // r0@11
  __int16 v9; // r1@12
  int v11; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 56) + 96;
  *(_WORD *)(v1 + 56) = v2;
  *(_WORD *)(v1 + 36) = -(v2 << 16 >> 24);
  LOWORD(v2) = *(_WORD *)(v1 + 48) + 1;
  *(_WORD *)(v1 + 48) = v2;
  if ( (signed __int16)v2 > 1 )
  {
    *(_WORD *)(v1 + 48) = 0;
    v3 = *(_WORD *)(2 * (*(_WORD *)(v1 + 50) + 1) + 0x202EEC8);
    v4 = 0;
    do
    {
      ++v4;
      *(_WORD *)(2 * (*(_WORD *)(v1 + 50) + v4) + 0x202EEC8) = *(_WORD *)(2 * (*(_WORD *)(v1 + 50) + v4 + 1) + 0x202EEC8);
    }
    while ( v4 <= 5 );
    *(_WORD *)(2 * (*(_WORD *)(v1 + 50) + 7) + 0x202EEC8) = v3;
  }
  v5 = *(_WORD *)(v1 + 60);
  if ( (signed int)*(_WORD *)(v1 + 60) > 6 )
  {
    if ( (signed int)*(_WORD *)(v1 + 46) <= 0 )
      goto _080CCEB8;
    v6 = *(_WORD *)(v1 + 58) + 1;
    *(_WORD *)(v1 + 58) = v6;
    if ( v6 > 1 )
    {
      *(_WORD *)(v1 + 58) = 0;
      v7 = v5 - 1;
      *(_WORD *)(v1 + 60) = v7;
      v4000052 = (v7 << 8) | (16 - v7);
    }
  }
  if ( (signed int)*(_WORD *)(v1 + 46) > 0 )
  {
    --*(_WORD *)(v1 + 46);
    return v11;
  }
_080CCEB8:
  v8 = *(_WORD *)(v1 + 58) + 1;
  *(_WORD *)(v1 + 58) = v8;
  if ( v8 > 1 )
  {
    *(_WORD *)(v1 + 58) = 0;
    v9 = *(_WORD *)(v1 + 60) + 1;
    *(_WORD *)(v1 + 60) = v9;
    v4000052 = (v9 << 8) | (16 - v9);
    if ( *(_WORD *)(v1 + 60) == 16 )
    {
      *(_BYTE *)(v1 + 62) |= 4u;
      *(_DWORD *)(v1 + 28) = sub_807861C;
    }
  }
  return v11;
}
