int __fastcall sub_81120E4(int a1, unsigned __int16 a2, char a3, unsigned __int8 a4)
{
  signed int v4; // r5@1
  char v5; // r4@1
  __int16 v6; // r10@1
  int v7; // r2@1
  __int16 v8; // r8@1
  int v9; // r2@1
  int v10; // r6@1
  int v11; // r2@1
  int v12; // r7@1
  int *v13; // r0@1
  unsigned __int8 v14; // r0@1
  int v15; // r1@1
  char *v16; // r1@1
  unsigned __int8 v17; // r0@1
  int *v18; // r0@1
  char v20; // [sp+8h] [bp-3Ch]@1
  unsigned int v21; // [sp+1Ch] [bp-28h]@1
  unsigned int v22; // [sp+20h] [bp-24h]@1
  int v23; // [sp+40h] [bp-4h]@1

  v21 = a1;
  v4 = a2;
  v5 = a3;
  v6 = a4;
  GetMonData(a1, 2, (int)&v20);
  StringCopy10((int)&gStringVar1, (int)&v20);
  StringCopy(gStringVar2, &gSpeciesNames[11 * v4]);
  gAffineAnimsDisabled = 1;
  v8 = GetMonData(v21, 11, v7);
  v10 = GetMonData(v21, 0, v9);
  v12 = GetMonData(v21, 1, v11);
  v2014800 = v5;
  DecompressPicFromTable_2(
    &gMonFrontPicTable[2 * v4],
    gMonFrontPicCoords[4 * v4],
    gMonFrontPicCoords[4 * v4 + 1],
    0x2000000,
    33595392,
    v4);
  v13 = (int *)sub_80409C8(v4, v12, v10);
  LoadCompressedPalette(*v13, 0x120u, 32);
  GetMonSpriteTemplate_803C56C(v4, 1u);
  v2024E9C = &gDummySpriteAffineAnimTable;
  v14 = CreateSprite(33705612, 120, 64);
  v2014801 = v14;
  v15 = 17 * v14;
  dword_2020020[v15] = (int)nullsub_37;
  v16 = &gSprites[v15 * 4];
  v16[5] = v16[5] & 0xF | 0x20;
  v16[62] |= 4u;
  sub_8149954();
  v17 = CreateTask((int)sub_8112FE8, 0);
  v2014802 = v17;
  v18 = &dword_3004B20[10 * v17];
  *((_WORD *)v18 + 4) = 0;
  *((_WORD *)v18 + 7) = v8;
  *((_WORD *)v18 + 8) = v4;
  *((_WORD *)v18 + 5) = v21;
  v22 = v21 >> 16;
  *((_WORD *)v18 + 6) = HIWORD(v21);
  *((_WORD *)v18 + 10) = 1;
  *((_WORD *)v18 + 15) = 0;
  *((_WORD *)v18 + 16) = v6;
  SetMainCallback2((int)sub_8112290);
  return v23;
}
