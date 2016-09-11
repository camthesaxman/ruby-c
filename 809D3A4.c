int __fastcall sub_809D3A4(unsigned __int16 a1, int a2, __int16 a3, __int16 a4, unsigned __int8 a5)
{
  int v5; // r4@1
  void *v7; // [sp+0h] [bp-2Ch]@1
  int v8; // [sp+4h] [bp-28h]@1
  void **v9; // [sp+8h] [bp-24h]@1
  void **v10; // [sp+Ch] [bp-20h]@1
  int v11; // [sp+10h] [bp-1Ch]@1
  __int16 v12; // [sp+14h] [bp-18h]@1

  v7 = &gOamData_83BC5E8;
  v8 = (int)*(&gMonIconTable + a1);
  v9 = &gSpriteAnimTable_83BC62C;
  v10 = &gSpriteAffineAnimTable_83BC660;
  v11 = a2;
  v12 = gMonIconPaletteIndices[a1] - 9536;
  v5 = (unsigned __int8)sub_809D710(&v7, a3, a4, a5);
  sub_809D638(&gSprites[68 * v5]);
  return v5;
}
