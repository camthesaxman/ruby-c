int sub_80F7470()
{
  unsigned int v0; // r4@1
  unsigned int v1; // r4@3
  int v2; // r0@4
  unsigned int v3; // r4@6
  int v4; // r0@7
  int v5; // r0@8
  int v6; // r0@9
  int v8; // [sp+8h] [bp-4h]@0

  v0 = 0;
  do
  {
    FreeSpriteTilesByTag(v0 + *v20388B8);
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 2 );
  FreeSpritePaletteByTag(*(_WORD *)(v20388B8 + 2));
  FreeSpritePaletteByTag(*(_WORD *)(v20388B8 + 2) + 1);
  v1 = 0;
  while ( 1 )
  {
    v2 = *(_DWORD *)(v20388B8 + 12 + 4 * v1);
    if ( !v2 )
      break;
    DestroySprite(v2);
    v1 = (v1 + 1) & 0xFFFF;
    if ( v1 > 1 )
    {
      v3 = 0;
      while ( 1 )
      {
        v4 = *(_DWORD *)(v20388B8 + 20 + 4 * v3);
        if ( !v4 )
          break;
        DestroySprite(v4);
        v5 = (v3 + 1) << 16;
        v3 = (v3 + 1) & 0xFFFF;
        if ( v3 > 3 )
        {
          sub_814A7FC(v5);
          v6 = *(_DWORD *)(v20388B8 + 36);
          if ( v6 )
            DestroySprite(v6);
          return v8;
        }
      }
      return v8;
    }
  }
  return v8;
}
