int c2_8123744()
{
  int v0; // r0@2
  int v1; // r9@9
  unsigned __int8 v2; // r0@9
  int v3; // r4@9
  char v4; // r0@9
  char v5; // r0@9
  char *v6; // r2@9
  char *v7; // r1@9
  __int16 v8; // r0@9
  char *v9; // r1@9
  int v11; // [sp+14h] [bp-4h]@0

  if ( v202FF5E == 1024 )
  {
    LOBYTE(v0) = sub_803DCA8();
  }
  else if ( v20239F8 & 0x100 )
  {
    LOBYTE(v0) = get_trainer_class_pic_index();
  }
  else
  {
    if ( !(v20239F8 & 0x800) )
    {
      v0 = *((_BYTE *)&gTrainers + 40 * v202FF5E + 3);
      goto _08034C56;
    }
    LOBYTE(v0) = sub_8135FBC();
  }
  v0 = (unsigned __int8)v0;
_08034C56:
  v1 = v0;
  sub_8031A6C(v0, v2024A60);
  v2 = battle_get_per_side_status(v2024A60);
  GetMonSpriteTemplate_803C5A0(v1, v2);
  v3 = (((8 - gTrainerFrontPicCoords[4 * v1]) << 18) + 2621440) >> 16;
  sub_8079E90(v2024A60);
  v4 = CreateSprite(33705612, 176, v3);
  *(_BYTE *)(v2024A60 + 0x2024BE0) = v4;
  *(_WORD *)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0) + 36] = -240;
  *(_WORD *)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0) + 46] = 2;
  v5 = IndexOfSpritePaletteTag(*(_WORD *)&gTrainerFrontPicPaletteTable[8 * v1 + 4]);
  v6 = &gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)];
  v6[5] = v6[5] & 0xF | 16 * v5;
  v7 = &gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)];
  *((_WORD *)v7 + 28) = *((_WORD *)v7 + 2) & 0x3FF;
  v8 = GetSpriteTileStartByTag(*(_WORD *)&gTrainerFrontPicTable[8 * v1 + 6]);
  v9 = &gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)];
  *((_WORD *)v9 + 2) = *((_WORD *)v9 + 2) & 0xFC00 | v8 & 0x3FF;
  *(_WORD *)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0) + 6] = v1;
  dword_2020020[17 * *(_BYTE *)(v2024A60 + 0x2024BE0)] = (int)sub_80313A0;
  dword_3004330[v2024A60] = (int)sub_8032B4C;
  return v11;
}
