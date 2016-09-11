int __fastcall FieldEffectFreeTilesIfUnused(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r4@1
  int v3; // r3@1
  unsigned int v4; // r2@2
  char *v5; // r1@3
  int v7; // [sp+8h] [bp-4h]@0

  v1 = a1 << 16;
  v2 = v1 >> 16;
  v3 = (unsigned __int16)GetSpriteTileTagByTileStart(HIWORD(v1));
  if ( v3 != 0xFFFF )
  {
    v4 = 0;
    while ( 1 )
    {
      v5 = &gSprites[68 * v4];
      if ( (unsigned __int8)v5[62] << 31 )
      {
        if ( v5[63] & 0x40 && v2 == *((_WORD *)v5 + 32) )
          break;
      }
      v4 = (v4 + 1) & 0xFF;
      if ( v4 > 0x3F )
      {
        FreeSpriteTilesByTag(v3);
        return v7;
      }
    }
  }
  return v7;
}
