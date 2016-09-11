int __fastcall sub_80C5CD4(int a1)
{
  int v1; // r7@1
  int v2; // r3@1
  unsigned __int16 v3; // r2@1
  unsigned int i; // r4@5
  char *v5; // r0@6
  int v6; // r1@6
  unsigned __int8 v7; // r0@10
  int v9; // [sp+0h] [bp-3Ch]@1
  signed int v10; // [sp+4h] [bp-38h]@1
  signed int v11; // [sp+8h] [bp-34h]@1
  int v12; // [sp+Ch] [bp-30h]@1
  signed int v13; // [sp+10h] [bp-2Ch]@1
  signed int v14; // [sp+14h] [bp-28h]@1
  int v15; // [sp+18h] [bp-24h]@1
  int v16; // [sp+1Ch] [bp-20h]@1
  int v17; // [sp+20h] [bp-1Ch]@1
  int v18; // [sp+24h] [bp-18h]@1
  int v19; // [sp+38h] [bp-4h]@11

  v1 = a1;
  v15 = 138221836;
  v16 = 128;
  v17 = 138221804;
  v18 = 0;
  v9 = 0;
  v10 = 138221784;
  v11 = 138221800;
  v12 = 0;
  v13 = 136194320;
  v14 = 135028941;
  v2 = *(_WORD *)a1;
  v16 = (v2 << 16) | 0x80;
  LOWORD(v9) = v2;
  v3 = *(_WORD *)(a1 + 2);
  v18 = v3;
  HIWORD(v9) = v3;
  LoadSpriteSheet((int)&v15);
  LoadSpritePalette((int)&v17);
  *(_WORD *)(v1 + 12) = 1;
  *(_WORD *)(v1 + 10) = 0;
  *(_WORD *)(v1 + 8) = 0;
  *(_DWORD *)(v1 + 16) = ~(0x10000 << IndexOfSpritePaletteTag(*(_WORD *)(v1 + 2))) & 0xFFFF0000;
  if ( !*(_WORD *)(v1 + 4) )
    *(_WORD *)(v1 + 4) = 16;
  if ( !*(_WORD *)(v1 + 6) )
    *(_WORD *)(v1 + 6) = 20;
  v20387EC = v1;
  for ( i = 0; i <= 7; i = (i + 1) & 0xFFFF )
  {
    v7 = CreateSprite((int)&v9, 32 * i + 8, 80);
    if ( v7 == 64 )
      break;
    v5 = &gSprites[68 * v7];
    v6 = *(_WORD *)(v1 + 4);
    if ( i <= 3 )
      v6 = -v6;
    *((_WORD *)v5 + 23) = v6;
  }
  v4000050 = 191;
  v4000054 = 16;
  return v19;
}
