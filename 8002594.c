int __fastcall LoadSpriteSheetDeferred(int a1)
{
  int v1; // r5@1
  __int16 v2; // r0@1
  int v3; // r4@2
  int result; // r0@2

  v1 = a1;
  v2 = AllocSpriteTiles(*(_WORD *)(a1 + 4) >> 5);
  if ( v2 & 0x8000 )
  {
    result = 0;
  }
  else
  {
    v3 = (unsigned __int16)v2;
    AllocSpriteTileRange(*(_WORD *)(v1 + 6), v2, *(_WORD *)(v1 + 4) >> 5);
    RequestSpriteSheetCopy(v1);
    result = v3;
  }
  return result;
}
