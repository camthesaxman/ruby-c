int sub_80E8420()
{
  signed int v0; // r0@1
  int v1; // r1@1
  int v2; // r0@1
  int v3; // r3@1
  signed int v5; // [sp+0h] [bp-2Ch]@1
  signed int v6; // [sp+4h] [bp-28h]@1
  void **v7; // [sp+8h] [bp-24h]@1
  int v8; // [sp+Ch] [bp-20h]@1
  signed int v9; // [sp+10h] [bp-1Ch]@1
  int (*v10)(); // [sp+14h] [bp-18h]@1
  int v11; // [sp+28h] [bp-4h]@1

  v5 = 65537;
  v6 = 138263572;
  v7 = &gSpriteAnimTable_83DBC7C;
  v8 = 0;
  v9 = 136194320;
  v10 = sub_80E85F8 + 1;
  v200109C = &gSprites[68 * (unsigned __int8)CreateSprite((int)&v5, 0, 0)];
  v7 = &gSpriteAnimTable_83DBC8C;
  v10 = sub_80E872C;
  v20010A0 = &gSprites[68 * (unsigned __int8)CreateSprite((int)&v5, 0, 0)];
  v7 = &gSpriteAnimTable_83DBC9C;
  v10 = sub_80E8760;
  v20010A4 = &gSprites[68 * (unsigned __int8)CreateSprite((int)&v5, 0, 0)];
  *(_WORD *)(v200109C + 46) = 0;
  *(_WORD *)(v20010A0 + 46) = 0;
  *(_WORD *)(v20010A4 + 46) = 0;
  v0 = IndexOfSpritePaletteTag(1u);
  v1 = v200109C;
  v2 = (16 * v0 & 0xFFF) + 257;
  *(_WORD *)(v200109C + 52) = v2;
  sub_80E8534(v2, v1, 257, v3, v5, v6);
  v2001096 = 1;
  v4000050 = 16192;
  return v11;
}
