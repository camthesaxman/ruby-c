int __fastcall sub_8085A5C(int a1, unsigned __int16 a2, int a3)
{
  unsigned __int16 v3; // r5@1
  int v4; // r4@1
  int v6; // [sp+8h] [bp-4h]@0

  v3 = a2;
  v4 = 8 * a1 & 0x7FF;
  LZDecompressVram(*(_DWORD *)&gTrainerFrontPicTable[v4], a3);
  LoadCompressedPalette(*(_DWORD *)&gTrainerFrontPicPaletteTable[v4], v3, 32);
  return v6;
}
