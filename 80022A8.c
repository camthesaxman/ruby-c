int __fastcall LoadSpriteSheet(int a1)
{
  int v1; // r5@1
  unsigned __int16 v2; // r0@1
  int v3; // r6@1
  int v4; // r4@2
  int result; // r0@2

  v1 = a1;
  v2 = AllocSpriteTiles(*(_WORD *)(a1 + 4) >> 5);
  v3 = (signed __int16)v2;
  if ( (v2 & 0x8000u) != 0 )
  {
    result = 0;
  }
  else
  {
    v4 = v2;
    AllocSpriteTileRange(*(_WORD *)(v1 + 6), v2, (unsigned int)*(_WORD *)(v1 + 4) >> 5);
    CpuSet(*(_DWORD *)v1, 32 * v3 + 100728832, (unsigned int)*(_WORD *)(v1 + 4) >> 1);
    result = v4;
  }
  return result;
}
