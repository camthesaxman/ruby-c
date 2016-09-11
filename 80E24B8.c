int __fastcall sub_80E24B8(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1
  __int16 *v3; // r1@7
  int v4; // r0@12
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_BYTE *)(a1 + 62) |= 4u;
  *(_WORD *)(a1 + 46) = -word_3004B00[0];
  v2 = word_3004B02;
  *(_WORD *)(v1 + 48) = word_3004B02;
  *(_WORD *)(v1 + 50) = v2;
  *(_WORD *)(v1 + 52) = word_3004B04;
  if ( word_3004B06 == 1 )
  {
    v3 = &word_30041B8;
    goto _080E250A;
  }
  if ( word_3004B06 > 1 )
  {
    if ( word_3004B06 != 2 )
      goto _080E2518;
    v3 = &gSpriteCoordOffsetX;
_080E250A:
    oamt_set_x3A_32(v1, (int)v3);
    goto _080E2520;
  }
  if ( !word_3004B06 )
  {
    v3 = &word_30041B0;
    goto _080E250A;
  }
_080E2518:
  oamt_set_x3A_32(v1, (int)&gSpriteCoordOffsetY);
_080E2520:
  *(_WORD *)(v1 + 54) = *(_DWORD *)(*(_WORD *)(v1 + 58) | (*(_WORD *)(v1 + 60) << 16));
  v4 = (unsigned __int16)word_3004B06;
  *(_WORD *)(v1 + 56) = word_3004B06;
  if ( ((v4 - 2) & 0xFFFFu) <= 1 )
    sub_80E260C();
  *(_DWORD *)(v1 + 28) = sub_80E255C;
  return v6;
}
