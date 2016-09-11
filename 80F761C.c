int __fastcall sub_80F761C(unsigned __int16 a1, unsigned __int16 a2, __int16 a3, unsigned __int16 a4)
{
  __int16 v4; // r5@1
  unsigned int v5; // r5@1
  int v6; // r8@1
  int v7; // r7@1
  int v8; // r9@1
  int v9; // r3@2
  char *v10; // r0@4
  unsigned int v11; // r5@5
  int v12; // r10@5
  unsigned __int8 v13; // r0@6
  char *v14; // r0@7
  int v15; // r3@8
  char *v16; // r0@9
  int v17; // r1@9
  int v18; // r1@3
  int v19; // r0@3
  char v21; // [sp+4h] [bp-78h]@1
  int v22; // [sp+1Ch] [bp-60h]@1
  __int16 v23; // [sp+20h] [bp-5Ch]@1
  __int16 v24; // [sp+22h] [bp-5Ah]@1
  void *v25; // [sp+24h] [bp-58h]@1
  signed __int16 v26; // [sp+28h] [bp-54h]@1
  __int16 v27; // [sp+2Ah] [bp-52h]@1
  char v28; // [sp+2Ch] [bp-50h]@1
  int v29; // [sp+34h] [bp-48h]@1
  __int16 v30; // [sp+38h] [bp-44h]@1
  void **v31; // [sp+3Ch] [bp-40h]@1
  __int16 v32; // [sp+40h] [bp-3Ch]@1
  char v33; // [sp+44h] [bp-38h]@1
  void (*v34)(); // [sp+48h] [bp-34h]@1
  int v35; // [sp+4Ch] [bp-30h]@1
  int v36; // [sp+50h] [bp-2Ch]@1
  int v37; // [sp+54h] [bp-28h]@1
  int v38; // [sp+58h] [bp-24h]@1
  int v39; // [sp+78h] [bp-4h]@14

  v35 = a1;
  v36 = a2;
  v4 = a3;
  v37 = a4;
  v22 = v20388B8 + 48;
  v23 = 4096;
  v24 = a3;
  v25 = &gPokenavConditionMenuMisc_Gfx;
  v26 = 1312;
  v27 = a3 + 1;
  memset(&v28, 0, 8);
  memcpy(&v21, (const char *)&v22, 24);
  v29 = *(_DWORD *)(v20388B8 + 44);
  v30 = v37;
  v31 = (void **)&gUnknown_08E966B8;
  v32 = v37 + 1;
  memset(&v33, 0, 8);
  memcpy(&v22, (const char *)&v29, 24);
  LOWORD(v29) = v4;
  HIWORD(v29) = v37;
  *(_DWORD *)&v30 = &gUnknown_083E5214;
  v31 = &gSpriteAnimTable_83E52AC;
  *(_DWORD *)&v32 = 0;
  *(_DWORD *)&v33 = &gDummySpriteAffineAnimTable;
  v34 = (void (*)())nullsub_65;
  *(_BYTE *)(v20388B8 + 11) = 1;
  AllocTilesForSpriteSheets(&v21);
  LoadSpritePalettes((int)&v22);
  v5 = 0;
  v6 = (v35 << 16) + 0x200000;
  v38 = v35 << 16;
  v7 = (v36 << 16) + 0x200000;
  v8 = v36 << 16;
  do
  {
    v9 = (unsigned __int8)CreateSprite((int)&v29, SHIWORD(v6), SHIWORD(v7));
    if ( v9 == 64 )
    {
      v18 = 4 * v5;
      v19 = v20388B8 + 12;
_080F7868:
      *(_DWORD *)(v19 + v18) = 0;
      return v39;
    }
    v10 = &gSprites[68 * v9];
    *(_DWORD *)(v20388B8 + 12 + 4 * v5) = v10;
    StartSpriteAnim((int)v10, v5);
    v5 = (v5 + 1) & 0xFFFF;
  }
  while ( v5 <= 1 );
  *(_WORD *)(*(_DWORD *)(v20388B8 + 16) + 34) = HIWORD(v8) + 96;
  LOWORD(v29) = v29 + 1;
  ++HIWORD(v29);
  v31 = &gSpriteAnimTable_83E5274;
  v34 = (void (*)())sub_80F78CC;
  *(_DWORD *)&v30 = &gUnknown_083E521C;
  v11 = 0;
  v12 = v38 + 0x200000;
  do
  {
    v13 = CreateSprite((int)&v29, SHIWORD(v12), 16 * v11 + 16 + HIWORD(v8));
    if ( v13 == 64 )
    {
      v18 = 4 * v11;
      v19 = v20388B8 + 20;
      goto _080F7868;
    }
    v14 = &gSprites[68 * v13];
    *(_DWORD *)(v20388B8 + 20 + 4 * v11) = v14;
    *((_WORD *)v14 + 23) = v11;
    v11 = (v11 + 1) & 0xFFFF;
  }
  while ( v11 <= 3 );
  v34 = SpriteCallbackDummy;
  v15 = (unsigned __int8)CreateSprite((int)&v29, 0, 0);
  if ( v15 == 64 )
  {
    *(_DWORD *)(v20388B8 + 36) = 0;
  }
  else
  {
    v16 = &gSprites[68 * v15];
    *(_DWORD *)(v20388B8 + 36) = v16;
    v16[1] = v16[1] & 0x3F | 0x40;
    *(_BYTE *)(*(_DWORD *)(v20388B8 + 36) + 3) |= 0xC0u;
    StartSpriteAnim(*(_DWORD *)(v20388B8 + 36), 9);
    v17 = v20388B8;
    *(_WORD *)(*(_DWORD *)(v20388B8 + 36) + 32) = HIWORD(v38) + 32;
    *(_WORD *)(*(_DWORD *)(v17 + 36) + 34) = HIWORD(v8) + 80;
    CalcCenterToCornerVec(*(_DWORD *)(v17 + 36), 1, 2, 0);
  }
  *(_BYTE *)(v20388B8 + 10) = v36 + 8;
  sub_814A5C0(0, (v37 + 1) & 0xFFFF, 15, 0);
  sub_814A880((v35 + 8) & 0xFF, *(_BYTE *)(v20388B8 + 10));
  sub_814AABC(sub_80F7908);
  return v39;
}
