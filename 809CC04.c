int sub_809CC04()
{
  unsigned __int8 v0; // r0@1
  char v1; // r5@6
  unsigned __int8 v2; // r0@8
  signed int v4; // [sp+0h] [bp-48h]@1
  signed int v5; // [sp+4h] [bp-44h]@1
  void *v6; // [sp+8h] [bp-40h]@1
  signed int v7; // [sp+Ch] [bp-3Ch]@1
  int v8; // [sp+10h] [bp-38h]@1
  int v9; // [sp+14h] [bp-34h]@1
  int v10; // [sp+18h] [bp-30h]@1
  signed int v11; // [sp+1Ch] [bp-2Ch]@1
  void *v12; // [sp+20h] [bp-28h]@1
  signed int v13; // [sp+24h] [bp-24h]@1
  int v14; // [sp+28h] [bp-20h]@1
  int v15; // [sp+2Ch] [bp-1Ch]@1
  char v16; // [sp+30h] [bp-18h]@1
  __int16 v17; // [sp+32h] [bp-16h]@1
  int v18; // [sp+44h] [bp-4h]@12

  v4 = 138130248;
  v5 = 2048;
  v6 = &HandCursorShadowTiles;
  v7 = 65664;
  v8 = 0;
  v9 = 0;
  v10 = 138130184;
  v11 = 'ÚÆ';
  v12 = &HandCursorAltPalette;
  v13 = 56017;
  v14 = 0;
  v15 = 0;
  LoadSpriteSheets(&v4);
  LoadSpritePalettes((int)&v10);
  v20011E4 = IndexOfSpritePaletteTag(0xDAC6u);
  v20011E5 = IndexOfSpritePaletteTag(0xDAD1u);
  sub_809AACC(v20384E4, v20384E5, &v16, &v17);
  v0 = CreateSprite((int)&gSpriteTemplate_83BBC70, *(__int16 *)&v16, v17);
  if ( v0 == 64 )
  {
    v20011C0 = 0;
  }
  else
  {
    v20011C0 = &gSprites[68 * v0];
    *(_BYTE *)(v20011C0 + 5) = *(_BYTE *)(v20011C0 + 5) & 0xF | 16 * *(_BYTE *)(v20384E9 + 0x20011E4);
    if ( v20384E6 )
      StartSpriteAnim(v20011C0, 3);
  }
  if ( v20384E4 == 1 )
    v1 = 1;
  else
    v1 = 2;
  v2 = CreateSprite((int)&gSpriteTemplate_83BBC88, 0, 0);
  if ( v2 == 64 )
  {
    v20011C4 = 0;
  }
  else
  {
    v20011C4 = &gSprites[68 * v2];
    *(_BYTE *)(v20011C4 + 5) = *(_BYTE *)(v20011C4 + 5) & 0xF3 | 4 * v1;
    if ( v20384E4 )
      *(_BYTE *)(v20011C4 + 62) |= 4u;
  }
  return v18;
}
