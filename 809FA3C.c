int __fastcall GetStringCenterAlignXOffsetWithLetterSpacing(int a1, int a2, int a3, int a4)
{
  int v4; // r2@1
  int v5; // r1@1
  int v7; // [sp+4h] [bp-4h]@0

  v4 = (2 * a3 & 0x1FF) + ((a4 << 6) & 0x3FFF) + 100724736;
  v5 = ((a2 << 12) & 0xFFFFF) + (2 * a1 & 0x1FF) + 512;
  *(_WORD *)v4 = v5 + 128;
  *(_WORD *)(v4 + 64) = v5 + 129;
  return v7;
}
