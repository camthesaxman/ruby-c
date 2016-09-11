int __fastcall SetBgTilemapBuffer(unsigned __int8 a1)
{
  _BYTE *v1; // r4@2
  int v2; // r0@2
  int v4; // [sp+4h] [bp-4h]@0

  if ( a1 <= 3u )
  {
    v1 = (_BYTE *)(a1 + 33786048);
    v2 = *(_BYTE *)(a1 + 0x20388C0);
    if ( v2 != 255 )
    {
      DestroySprite((int)&gSprites[68 * v2]);
      *v1 = -1;
    }
  }
  return v4;
}
