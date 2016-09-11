int __fastcall sub_80478DC(unsigned __int8 a1)
{
  signed int v1; // r4@1
  int v2; // r6@1
  void **v3; // r5@1
  signed int v4; // r0@7
  int v6; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = 8 * a1;
  v3 = (void **)&gUnknown_0820A92C[4 * a1];
  if ( GetSpriteTileStartByTag(*((_WORD *)v3 + 3)) << 16 == -65536 )
  {
    LoadCompressedObjectPic(v3);
    LoadCompressedObjectPalette(&gUnknown_0820A98C[v2]);
  }
  if ( v1 != 6 && (v1 < 6 || v1 > 11 || v1 < 10) )
  {
    v4 = GetSpriteTileStartByTag(gUnknown_0820A92C[4 * v1 + 3]);
    LZDecompressVram((int)&gUnknown_08D030D0, (32 * v4 & 0x1FFFFF) + 100729088);
  }
  return v6;
}
