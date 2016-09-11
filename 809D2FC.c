int __fastcall sub_809D2FC(unsigned __int16 a1, int a2, __int16 a3, __int16 a4, unsigned __int8 a5, int a6)
{
  int v6; // r5@1
  unsigned int v7; // r4@1
  __int16 v8; // r7@1
  __int16 v9; // r6@1
  int v10; // r4@3
  int v12; // [sp+0h] [bp-48h]@1
  __int16 v13; // [sp+14h] [bp-34h]@2
  void *v14; // [sp+18h] [bp-30h]@1
  int v15; // [sp+1Ch] [bp-2Ch]@1
  void **v16; // [sp+20h] [bp-28h]@1
  void **v17; // [sp+24h] [bp-24h]@1
  int v18; // [sp+28h] [bp-20h]@1
  __int16 v19; // [sp+2Ch] [bp-1Ch]@1

  v6 = a2;
  v7 = a1;
  v8 = a3;
  v9 = a4;
  v14 = &gOamData_83BC5E8;
  v15 = sub_809D4F4(a1, a6);
  v16 = &gSpriteAnimTable_83BC62C;
  v17 = &gSpriteAffineAnimTable_83BC660;
  v18 = v6;
  v19 = gMonIconPaletteIndices[v7] - 9536;
  memcpy(&v12, &v14, 24);
  if ( v7 > 0x19C )
    v13 = -9536;
  v10 = (unsigned __int8)sub_809D710(&v12, v8, v9, a5);
  sub_809D638(&gSprites[68 * v10]);
  return v10;
}
