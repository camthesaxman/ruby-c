int __fastcall sub_80C7D14(int a1)
{
  int v1; // r12@1
  _BYTE *v2; // r4@1
  char v3; // r5@1
  signed int v4; // r2@1
  unsigned int v5; // r0@1
  unsigned int v6; // r1@1
  unsigned int v7; // r6@1
  unsigned int v8; // r3@1
  int v10; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = (_BYTE *)(a1 + 62);
  v3 = *(_BYTE *)(a1 + 62) & 0xFB;
  *(_BYTE *)(a1 + 62) = v3;
  v4 = (*(_BYTE *)(a1 + 40) + *(_WORD *)(a1 + 36) + *(_WORD *)(a1 + 32) + (unsigned __int16)gSpriteCoordOffsetX) << 16;
  v5 = (*(_BYTE *)(a1 + 41) + *(_WORD *)(a1 + 38) + *(_WORD *)(a1 + 34) + (unsigned __int16)gSpriteCoordOffsetY) << 16;
  v6 = (unsigned int)(v4 + 0x400000) >> 16;
  v7 = v5 >> 16;
  v8 = (v5 + 0x400000) >> 16;
  if ( v4 >> 16 > 255 || (signed __int16)v6 < -16 )
    *v2 = v3 | 4;
  if ( (signed __int16)v7 > 175 || (signed __int16)v8 < -16 )
    *(_BYTE *)(v1 + 62) |= 4u;
  return v10;
}
