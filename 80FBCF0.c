int __fastcall sub_80FBCF0(int a1, __int16 a2)
{
  int v2; // r0@1
  unsigned __int8 v3; // r0@3
  int v4; // r2@3
  char *v5; // r1@3
  int v6; // r1@4
  int (*v7)(); // r0@4
  __int16 v9; // [sp+0h] [bp-34h]@1
  __int16 v10; // [sp+2h] [bp-32h]@1
  void *v11; // [sp+4h] [bp-30h]@1
  void **v12; // [sp+8h] [bp-2Ch]@1
  int v13; // [sp+Ch] [bp-28h]@1
  void **v14; // [sp+10h] [bp-24h]@1
  void (*v15)(); // [sp+14h] [bp-20h]@1
  void *v16; // [sp+18h] [bp-1Ch]@1
  int v17; // [sp+1Ch] [bp-18h]@1
  void *v18; // [sp+20h] [bp-14h]@1
  unsigned int v19; // [sp+24h] [bp-10h]@1
  int v20; // [sp+30h] [bp-4h]@6

  v2 = a1 << 16;
  v16 = &gUnknown_083E5C40;
  v17 = v2 | 0x80;
  v18 = &gUnknown_083E5C20;
  v19 = v19 & 0xFFFF0000 | (unsigned __int16)a2;
  v9 = HIWORD(v2);
  v10 = a2;
  v11 = &gUnknown_083E7708;
  v12 = &gUnknown_083E7718;
  v13 = 0;
  v14 = &gDummySpriteAffineAnimTable;
  v15 = SpriteCallbackDummy;
  if ( v2024EAC == 1 )
  {
    v16 = &gUnknown_083E5CE0;
    v18 = &gUnknown_083E5CC0;
  }
  LoadSpriteSheet((int)&v16);
  LoadSpritePalette((int)&v18);
  v3 = CreateSprite((int)&v9, 0, 0);
  v4 = v20388CC;
  v5 = &gSprites[68 * v3];
  *(_DWORD *)(v20388CC + 32) = v5;
  if ( *(_BYTE *)(v4 + 120) )
  {
    *((_WORD *)v5 + 16) = 16 * *(_WORD *)(v4 + 116) - 48;
    *(_WORD *)(*(_DWORD *)(v4 + 32) + 34) = 16 * *(_WORD *)(v4 + 118) - 66;
    v6 = *(_DWORD *)(v4 + 32);
    v7 = sub_80FBEA4;
  }
  else
  {
    *((_WORD *)v5 + 16) = 8 * *(_WORD *)(v4 + 116) + 4;
    *(_WORD *)(*(_DWORD *)(v4 + 32) + 34) = 8 * *(_WORD *)(v4 + 118) + 4;
    v6 = *(_DWORD *)(v4 + 32);
    v7 = sub_80FBF34;
  }
  *(_DWORD *)(v6 + 28) = v7;
  return v20;
}
