signed int sub_80F4024()
{
  int v0; // r1@11
  int v2; // [sp+0h] [bp-18h]@9
  int v3; // [sp+4h] [bp-14h]@9
  int v4; // [sp+8h] [bp-10h]@10
  int v5; // [sp+Ch] [bp-Ch]@10

  if ( v2000306 == 1 )
  {
    v2 = 33632740;
    v3 = 1576960;
    LoadSpriteSheet((int)&v2);
  }
  else if ( (signed int)v2000306 > 1 )
  {
    if ( v2000306 != 2 )
    {
      if ( v2000306 == 3 )
      {
        v0 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83E4850, 218, 14);
        if ( v0 == 64 )
        {
          v2006D98 = 0;
        }
        else
        {
          v2006D98 = &gSprites[68 * v0];
          *(_WORD *)(v2006D98 + 46) = 0;
        }
        ++v2000306;
      }
      return 0;
    }
    v4 = 138293884;
    v5 = 16;
    LoadSpritePalette((int)&v4);
    v2000308 = ~(1 << (IndexOfSpritePaletteTag(0x10u) + 16)) & 0xFFFFFFFD;
  }
  else
  {
    if ( v2000306 )
      return 0;
    LZ77UnCompWram(&gUnknown_083E329C, 33632740);
  }
  ++v2000306;
  return 1;
}
