signed int __fastcall sub_806283C(int a1, int a2)
{
  int v2; // r4@1

  v2 = a2;
  *(_BYTE *)(a2 + 1) |= 3u;
  InitSpriteAffineAnim(a2);
  *(_BYTE *)(v2 + 44) |= 0x80u;
  *(_BYTE *)(v2 + 66) &= 0x3Fu;
  return 1;
}
