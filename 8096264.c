int __fastcall sub_8096264(int a1, __int16 a2, unsigned __int16 a3, char a4)
{
  int v4; // r8@1
  __int16 v5; // r4@1
  unsigned __int16 v6; // r6@1
  char v7; // r9@1
  void *v9; // [sp+0h] [bp-38h]@1
  __int16 v10; // [sp+4h] [bp-34h]@1
  __int16 v11; // [sp+6h] [bp-32h]@1
  void *v12; // [sp+8h] [bp-30h]@1
  __int16 v13; // [sp+Ch] [bp-2Ch]@1
  __int16 v14; // [sp+Eh] [bp-2Ah]@1
  char v15; // [sp+10h] [bp-28h]@1
  void *v16; // [sp+18h] [bp-20h]@1
  unsigned int v17; // [sp+1Ch] [bp-1Ch]@1
  int v18; // [sp+34h] [bp-4h]@1

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v16 = &gBoxSelectionPopupPalette;
  v17 = v17 & 0xFFFF0000 | a3;
  v9 = &gBoxSelectionPopupCenterTiles;
  v10 = 2048;
  v11 = a2;
  v12 = &gBoxSelectionPopupSidesTiles;
  v13 = 384;
  v14 = a2 + 1;
  memset(&v15, 0, 8);
  LoadSpritePalette((int)&v16);
  LoadSpriteSheets(&v9);
  v2038478 = v4;
  *(_WORD *)(v4 + 576) = v5;
  *(_WORD *)(v4 + 578) = v6;
  *(_BYTE *)(v4 + 574) = v7;
  return v18;
}
