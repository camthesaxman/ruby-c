int __fastcall sub_807ECEC(int a1)
{
  int v2; // [sp+4h] [bp-4h]@0

  if ( v202FECA > 0x12u )
  {
    *(_BYTE *)(a1 + 62) &= 0xFBu;
    *(_DWORD *)(a1 + 28) = sub_807ED48;
    *(_WORD *)(a1 + 34) = 250 - (*(_BYTE *)(a1 + 41) + gSpriteCoordOffsetY);
    *(_WORD *)(a1 + 46) = *(_WORD *)(a1 + 34) << 7;
    v202FECA = 0;
  }
  return v2;
}
