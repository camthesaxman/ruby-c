int __fastcall sub_80FBB3C(int a1, __int16 a2)
{
  int v2; // r0@1
  unsigned __int16 v3; // r6@1
  int v4; // r4@1
  void *v5; // r0@2
  int v6; // r1@4
  int v7; // r2@5
  char *v8; // r3@5
  int v9; // r2@6
  int v10; // r1@7
  __int16 v11; // r0@8
  int v12; // r1@8
  __int16 v14; // [sp+0h] [bp-3Ch]@1
  __int16 v15; // [sp+2h] [bp-3Ah]@1
  signed int v16; // [sp+4h] [bp-38h]@1
  signed int v17; // [sp+8h] [bp-34h]@1
  int v18; // [sp+Ch] [bp-30h]@1
  signed int v19; // [sp+10h] [bp-2Ch]@1
  signed int v20; // [sp+14h] [bp-28h]@1
  int v21; // [sp+18h] [bp-24h]@2
  unsigned __int16 v22; // [sp+1Ch] [bp-20h]@1
  int v23; // [sp+20h] [bp-1Ch]@1
  unsigned int v24; // [sp+24h] [bp-18h]@1
  int v25; // [sp+38h] [bp-4h]@9

  v2 = a1 << 16;
  v3 = a2;
  v23 = 138304208;
  v24 = 0;
  v16 = 138311352;
  v17 = 138311392;
  v18 = 0;
  v19 = 136194320;
  v20 = 135248625;
  *(_DWORD *)&v22 = v22 | v2;
  v14 = HIWORD(v2);
  v4 = v20388CC;
  *(_WORD *)(v20388CC + 88) = HIWORD(v2);
  v24 = v24 & 0xFFFF0000 | (unsigned __int16)a2;
  v15 = a2;
  *(_WORD *)(v4 + 90) = a2;
  if ( *(_BYTE *)(v4 + 120) )
  {
    v21 = v4 + 640;
    *(_DWORD *)&v22 = *(_DWORD *)&v22 & 0xFFFF0000 | 0x600;
    v5 = nullsub_66;
  }
  else
  {
    v21 = v4 + 384;
    *(_DWORD *)&v22 = *(_DWORD *)&v22 & 0xFFFF0000 | 0x100;
    v5 = sub_80FBAF0;
  }
  v20 = (signed int)v5;
  LoadSpriteSheet((int)&v21);
  LoadSpritePalette((int)&v23);
  v6 = (unsigned __int8)CreateSprite((int)&v14, 56, 72);
  if ( v6 != 64 )
  {
    v7 = v20388CC;
    v8 = &gSprites[68 * v6];
    *(_DWORD *)(v20388CC + 28) = v8;
    if ( *(_BYTE *)(v7 + 120) == 1 )
    {
      v8[3] = v8[3] & 0x3F | 0x80;
      v9 = v20388CC;
      *(_WORD *)(*(_DWORD *)(v20388CC + 28) + 32) -= 8;
      *(_WORD *)(*(_DWORD *)(v9 + 28) + 34) -= 8;
      StartSpriteAnim(*(_DWORD *)(v9 + 28), 1);
    }
    else
    {
      v8[3] = v8[3] & 0x3F | 0x40;
      v10 = v20388CC;
      *(_WORD *)(*(_DWORD *)(v20388CC + 28) + 32) = 8 * *(_WORD *)(v20388CC + 84) + 4;
      *(_WORD *)(*(_DWORD *)(v10 + 28) + 34) = 8 * *(_WORD *)(v10 + 86) + 4;
    }
    *(_WORD *)(*(_DWORD *)(v20388CC + 28) + 48) = 2;
    v11 = IndexOfSpritePaletteTag(v3);
    v12 = v20388CC;
    *(_WORD *)(*(_DWORD *)(v20388CC + 28) + 50) = (16 * v11 & 0xFFF) + 257;
    *(_WORD *)(*(_DWORD *)(v12 + 28) + 52) = 1;
  }
  return v25;
}
