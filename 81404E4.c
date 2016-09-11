int __fastcall sub_81404E4(int a1)
{
  int v1; // r4@1
  signed int v2; // r0@1
  char v3; // r0@7
  int v4; // r0@8
  __int16 v5; // r1@9
  int v7; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( v2 == 1 )
  {
    v4 = *(_WORD *)(v1 + 48);
    *(_WORD *)(v1 + 48) = v4 + 1;
    if ( v4 << 16 <= 0 )
      return v7;
    *(_WORD *)(v1 + 48) = 0;
    v5 = *(_WORD *)(v1 + 50) + 1;
    *(_WORD *)(v1 + 50) = v5;
    v4000052 = (v5 << 8) | (16 - v5);
    if ( *(_WORD *)(v1 + 50) != 16 )
      return v7;
    goto _0814058C;
  }
  if ( v2 <= 1 )
  {
    if ( v2 )
      goto _08140594;
    *(_WORD *)(v1 + 48) = 0;
    *(_WORD *)(v1 + 50) = 0;
    *(_BYTE *)(v1 + 1) = *(_BYTE *)(v1 + 1) & 0xF3 | 4;
    v4000050 = 16192;
    v4000052 = 16;
    v3 = IndexOfSpritePaletteTag(*(_WORD *)(*(_DWORD *)(v1 + 20) + 2));
    BeginNormalPaletteFade(1 << (v3 + 16), 0, 0, 0x10u, 0x7FFF);
_0814058C:
    ++*(_WORD *)(v1 + 46);
    return v7;
  }
  if ( v2 == 2 )
  {
    *(_BYTE *)(v1 + 62) |= 4u;
    goto _0814058C;
  }
_08140594:
  if ( !(v202F38F & 0x80) )
  {
    v4000050 = 0;
    v4000052 = 0;
    *(_WORD *)(v1 + 46) = 0;
    *(_DWORD *)(v1 + 28) = sub_81405C8;
  }
  return v7;
}
