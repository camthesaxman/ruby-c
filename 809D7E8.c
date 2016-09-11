int __fastcall sub_809D7E8(int a1)
{
  int v2; // [sp+0h] [bp-Ch]@1
  unsigned int v3; // [sp+4h] [bp-8h]@1
  int v4; // [sp+8h] [bp-4h]@1

  v2 = 0;
  v3 = v3 & 0xFFFF0000 | *(&gSpriteImageSizes[4 * ((unsigned int)*(_BYTE *)(a1 + 1) >> 6)]
                         + ((unsigned int)*(_BYTE *)(a1 + 3) >> 6));
  *(_DWORD *)(a1 + 12) = &v2;
  DestroySprite(a1);
  return v4;
}
