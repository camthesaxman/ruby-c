int sub_80AB2AC()
{
  int v0; // r0@1
  signed int v1; // r4@1
  signed int v2; // r5@1
  int v4; // [sp+8h] [bp-4h]@0

  LZDecompressVram((int)&gContestMiscGfx, 100663296);
  LZDecompressVram((int)&gContestAudienceGfx, 100671488);
  LZDecompressVram((int)&gUnknown_08D1725C, 100716544);
  v0 = LoadCompressedPalette((int)&gUnknown_08D17144, 0, 512);
  sub_80AB350(v0);
  v1 = 0;
  v2 = 160;
  do
  {
    LoadPalette(v2 + 33652740, 16 * (*(_BYTE *)(v1 + 33785494) + 5), 32);
    v2 += 32;
    ++v1;
  }
  while ( v1 <= 3 );
  return v4;
}
