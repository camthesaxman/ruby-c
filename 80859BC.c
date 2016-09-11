int __fastcall sub_80859BC(int a1, __int16 a2, __int16 a3, int a4, int a5)
{
  __int16 v5; // r5@1
  __int16 v6; // r6@1
  int v7; // r4@1
  char *v8; // r8@1
  char *v9; // r4@1
  __int16 v11; // [sp+0h] [bp-34h]@1
  __int16 v12; // [sp+2h] [bp-32h]@1
  void *v13; // [sp+4h] [bp-30h]@1
  void **v14; // [sp+8h] [bp-2Ch]@1
  int v15; // [sp+Ch] [bp-28h]@1
  void **v16; // [sp+10h] [bp-24h]@1
  void (*v17)(); // [sp+14h] [bp-20h]@1

  v5 = a2;
  v6 = a3;
  v7 = 8 * a1 & 0x7FF;
  v8 = &gTrainerFrontPicPaletteTable[v7];
  LoadCompressedObjectPaletteOverrideBuffer(&gTrainerFrontPicPaletteTable[v7], a5);
  v9 = &gTrainerFrontPicTable[v7];
  LoadCompressedObjectPicOverrideBuffer(v9, a5);
  v11 = *((_WORD *)v9 + 3);
  v12 = *((_WORD *)v8 + 2);
  v13 = &gOamData_839F0F4;
  v14 = &gDummySpriteAnimTable;
  v15 = 0;
  v16 = &gDummySpriteAffineAnimTable;
  v17 = SpriteCallbackDummy;
  return (unsigned __int8)CreateSprite((int)&v11, v5, v6);
}
