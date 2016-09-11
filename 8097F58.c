int sub_8097F58()
{
  int v0; // r0@1
  int v2; // [sp+4h] [bp-4h]@0

  v0 = sub_80F7940(13, 56014, 0);
  v20012AC = v0;
  *(_BYTE *)(v0 + 5) &= 0xF3u;
  *(_BYTE *)(v20012AC + 67) = 1;
  *(_WORD *)(v20012AC + 32) = 40;
  *(_WORD *)(v20012AC + 34) = 149;
  v20012B8 = (32 * GetSpriteTileStartByTag(0xDu) & 0x1FFFFF) + 100728832;
  return v2;
}
