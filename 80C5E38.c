int __fastcall sub_80C5E38(int a1)
{
  int v1; // r7@1
  int v2; // r3@1
  unsigned __int16 v3; // r2@1
  unsigned int i; // r5@5
  int v5; // r2@6
  char *v6; // r1@6
  char *v7; // r1@6
  int v8; // r3@7
  char *v9; // r1@8
  __int16 v10; // r4@8
  int v11; // r0@9
  int v13; // [sp+0h] [bp-3Ch]@1
  signed int v14; // [sp+4h] [bp-38h]@1
  signed int v15; // [sp+8h] [bp-34h]@1
  int v16; // [sp+Ch] [bp-30h]@1
  signed int v17; // [sp+10h] [bp-2Ch]@1
  signed int v18; // [sp+14h] [bp-28h]@1
  int v19; // [sp+18h] [bp-24h]@1
  int v20; // [sp+1Ch] [bp-20h]@1
  int v21; // [sp+20h] [bp-1Ch]@1
  int v22; // [sp+24h] [bp-18h]@1
  int v23; // [sp+38h] [bp-4h]@13

  v1 = a1;
  v19 = 138221836;
  v20 = 128;
  v21 = 138221804;
  v22 = 0;
  v13 = 0;
  v14 = 138221784;
  v15 = 138221800;
  v16 = 0;
  v17 = 136194320;
  v18 = 135029041;
  v2 = *(_WORD *)a1;
  v20 = (v2 << 16) | 0x80;
  LOWORD(v13) = v2;
  v3 = *(_WORD *)(a1 + 2);
  v22 = v3;
  HIWORD(v13) = v3;
  LoadSpriteSheet((int)&v19);
  LoadSpritePalette((int)&v21);
  *(_WORD *)(v1 + 12) = 80;
  *(_WORD *)(v1 + 8) = 0;
  *(_WORD *)(v1 + 10) = 0;
  *(_DWORD *)(v1 + 16) = ~(0x10000 << IndexOfSpritePaletteTag(*(_WORD *)(v1 + 2))) & 0xFFFF0000;
  if ( !*(_WORD *)(v1 + 4) )
    *(_WORD *)(v1 + 4) = 16;
  if ( !*(_WORD *)(v1 + 6) )
    *(_WORD *)(v1 + 6) = 20;
  v20387EC = v1;
  for ( i = 0; i <= 7; i = (i + 1) & 0xFFFF )
  {
    if ( i > 3 )
    {
      v8 = (unsigned __int8)CreateSprite((int)&v13, ((i << 21) + 0x800000) >> 16, 80);
      if ( v8 == 64 )
        break;
      v5 = 16 * v8;
      v9 = &gSprites[68 * v8];
      *((_WORD *)v9 + 23) = -*(_WORD *)(v1 + 4);
      *((_WORD *)v9 + 24) = -1;
      v7 = gSprites;
      v10 = 32 * i;
    }
    else
    {
      v10 = 32 * i;
      v8 = (unsigned __int8)CreateSprite((int)&v13, 32 * i - 112, 80);
      if ( v8 == 64 )
        break;
      v5 = 16 * v8;
      v6 = &gSprites[68 * v8];
      *((_WORD *)v6 + 23) = *(_WORD *)(v1 + 4);
      *((_WORD *)v6 + 24) = 1;
      v7 = gSprites;
    }
    v11 = (int)&v7[4 * (v5 + v8)];
    *(_WORD *)(v11 + 50) = v10 + 8;
    *(_WORD *)(v11 + 54) = 0;
    *(_BYTE *)(v11 + 62) |= 4u;
  }
  v4000050 = 255;
  v4000054 = 16;
  sub_80C61B0(sub_80C6078);
  return v23;
}
