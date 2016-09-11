int __fastcall sub_80B6998(int a1)
{
  int v1; // r4@1
  _BYTE *v2; // r3@3
  int v3; // r2@3
  int v4; // r0@10
  __int16 v5; // r1@11
  __int16 v6; // r2@11
  int v7; // r4@16
  signed int v8; // r0@16
  int v10; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( *(_BYTE *)(a1 + 63) & 0x10 )
    StartSpriteAnim(a1, 0);
  v2 = (_BYTE *)(v1 + 62);
  v3 = (unsigned __int8)(*(_BYTE *)(v1 + 62) & 0xFB) | 4 * (*(_WORD *)(v1 + 54) & 1);
  *(_BYTE *)(v1 + 62) = v3;
  if ( *(_WORD *)(v1 + 46) == 8 )
    *v2 = v3 | 4;
  if ( *v2 & 4
    || !(*(_WORD *)(v1 + 54) & 0xFF00)
    || *(_WORD *)(v1 + 46) != *(_WORD *)(v1 + 50)
    || *(_WORD *)(v1 + 48) != *(_WORD *)(v1 + 52) )
  {
    *(_WORD *)(v1 + 56) = 0;
    *(_WORD *)(v1 + 58) = 1;
    *(_WORD *)(v1 + 60) = 2;
  }
  v4 = *(_WORD *)(v1 + 60) - 1;
  *(_WORD *)(v1 + 60) = v4;
  if ( !(v4 << 16) )
  {
    v5 = *(_WORD *)(v1 + 58);
    v6 = *(_WORD *)(v1 + 56);
    *(_WORD *)(v1 + 56) = v5 + v6;
    if ( (signed __int16)(v5 + v6) == 16 || !(v5 + v6) )
      *(_WORD *)(v1 + 58) = -v5;
    *(_WORD *)(v1 + 60) = 2;
  }
  if ( *(_WORD *)(v1 + 54) & 0xFF00 )
  {
    v7 = *(_WORD *)(v1 + 56);
    v8 = IndexOfSpritePaletteTag(5u);
    sub_8085C7C((((v8 << 20) & 0xFFFFFFFu) + 16842752) >> 16, v7 << 16 >> 17, v7, v7);
  }
  return v10;
}
