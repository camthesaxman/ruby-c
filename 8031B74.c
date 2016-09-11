int __fastcall sub_8031B74(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = 8 * a1 & 0x7FFFF;
  FreeSpritePaletteByTag(*(_WORD *)&gTrainerFrontPicPaletteTable[v1 + 4]);
  FreeSpriteTilesByTag(*(_WORD *)&gTrainerFrontPicTable[v1 + 6]);
  return v3;
}
