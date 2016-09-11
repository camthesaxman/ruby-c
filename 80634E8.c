int __fastcall sub_80634E8(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r6@1
  int v5; // r3@2
  unsigned __int16 v6; // r0@2
  int v7; // r4@4
  int v9; // [sp+Ch] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  *(_BYTE *)(a1 + 1) &= 0xBFu;
  v4 = GetFieldObjectGraphicsInfo(*(_BYTE *)(a1 + 5));
  if ( *(_BYTE *)(v3 + 62) & 2 )
  {
    v5 = (*(_BYTE *)(v3 + 40) + *(_WORD *)(v3 + 36) + *(_WORD *)(v3 + 32) + (unsigned __int16)gSpriteCoordOffsetX) & 0xFFFF;
    v6 = *(_BYTE *)(v3 + 41) + *(_WORD *)(v3 + 38) + *(_WORD *)(v3 + 34) + gSpriteCoordOffsetY;
  }
  else
  {
    v5 = (*(_BYTE *)(v3 + 40) + *(_WORD *)(v3 + 36) + *(_WORD *)(v3 + 32)) & 0xFFFF;
    v6 = *(_BYTE *)(v3 + 41) + *(_WORD *)(v3 + 38) + *(_WORD *)(v3 + 34);
  }
  v7 = (*(_WORD *)(v4 + 10) + v6) & 0xFFFF;
  if ( (signed __int16)v5 > 255 || (signed __int16)(*(_WORD *)(v4 + 8) + v5) < -16 )
    *(_BYTE *)(v2 + 1) |= 0x40u;
  if ( (signed __int16)v6 > 175 || (signed __int16)v7 < -16 )
    *(_BYTE *)(v2 + 1) |= 0x40u;
  return v9;
}
