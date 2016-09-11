int sub_800DAB8()
{
  int v1; // [sp+0h] [bp-4h]@0

  LZDecompressVram((int)&gUnknown_08D00000, 100663296);
  CpuSet(&gUnknown_08D00524, 100712448, 2048);
  LoadCompressedPalette(&gUnknown_08D004E0, 0, 64);
  sub_800D74C();
  sub_800D7B8();
  return v1;
}
