int sub_804E22C()
{
  int v1; // [sp+4h] [bp-4h]@0

  LZDecompressVram((int)&gUnknown_08D00000, 100663296);
  CpuSet(&gUnknown_08D00524, 0x2000000, 2048);
  v40000D4 = 0x2000000;
  v40000D8 = 100673536;
  v40000DC = -2147483008;
  LoadCompressedPalette(&gUnknown_08D004E0, 0, 32);
  v400000A = 1282;
  return v1;
}
