int __fastcall sub_80BD034(unsigned __int8 a1, const char *a2)
{
  int v2; // r4@1
  int v4; // [sp+4h] [bp-4h]@0

  v2 = 160 * a1 + 33707828;
  memcpy(160 * a1 + 33714492, a2, 160);
  *(_BYTE *)(v2 + 6665) = *(_BYTE *)(v2 + 6665) & 0x3F | 0x80;
  return v4;
}
