int __fastcall sub_8085C44(int a1)
{
  int v1; // r4@1
  unsigned __int16 v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_807DE68();
  v2 = GetSpritePaletteTagByPaletteNum((unsigned int)*(_BYTE *)(v1 + 5) >> 4);
  FreeSpritePaletteByTag(v2);
  if ( *(_BYTE *)(v1 + 1) << 30 )
    FreeOamMatrix((unsigned int)*(_BYTE *)(v1 + 3) << 26 >> 27);
  DestroySprite(v1);
  return v4;
}
