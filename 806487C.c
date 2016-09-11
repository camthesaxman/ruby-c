int __fastcall sub_806487C(int a1, char a2)
{
  int v2; // r12@1
  _BYTE *v3; // r3@1
  int v4; // r0@1
  _BYTE *v5; // r4@2
  int v6; // r6@2
  _BYTE *v7; // r3@2
  int v8; // r5@2
  _BYTE *v9; // r2@2
  int v10; // r2@4
  int v12; // [sp+Ch] [bp-4h]@0

  v2 = a1;
  v3 = (_BYTE *)(a1 + 62);
  v4 = (unsigned __int8)(*(_BYTE *)(a1 + 62) & 0xFB) | 4 * (a2 & 1);
  *v3 = v4;
  if ( v4 & 2 )
  {
    v5 = (_BYTE *)(v2 + 40);
    v6 = (*(_BYTE *)(v2 + 40) + *(_WORD *)(v2 + 36) + *(_WORD *)(v2 + 32) + (unsigned __int16)gSpriteCoordOffsetX) & 0xFFFF;
    v7 = v3 - 21;
    v8 = (*v7 + *(_WORD *)(v2 + 38) + *(_WORD *)(v2 + 34) + (unsigned __int16)gSpriteCoordOffsetY) & 0xFFFF;
    v9 = v7;
  }
  else
  {
    v6 = (*(_BYTE *)(v2 + 40) + *(_WORD *)(v2 + 36) + *(_WORD *)(v2 + 32)) & 0xFFFF;
    v9 = (_BYTE *)(v2 + 41);
    v8 = (*(_BYTE *)(v2 + 41) + *(_WORD *)(v2 + 38) + *(_WORD *)(v2 + 34)) & 0xFFFF;
    v5 = (_BYTE *)(v2 + 40);
  }
  v10 = (v8 - (*v9 << 24 >> 25)) & 0xFFFF;
  if ( (signed __int16)v6 > 255 || (signed __int16)(v6 - (*v5 << 24 >> 25)) < -16 )
    *(_BYTE *)(v2 + 62) |= 4u;
  if ( (signed __int16)v8 > 175 || (signed __int16)v10 < -16 )
    *(_BYTE *)(v2 + 62) |= 4u;
  return v12;
}
