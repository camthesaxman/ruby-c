int __fastcall sub_804794C(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = 8 * a1 & 0x7FF;
  FreeSpriteTilesByTag(*(_WORD *)((char *)&gUnknown_0820A92C[3] + v1));
  FreeSpritePaletteByTag(*(_WORD *)&gUnknown_0820A98C[v1 + 4]);
  return v3;
}
