int __fastcall FieldEffectFreePaletteIfUnused(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r5@1
  unsigned int v3; // r2@2
  int v5; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = (unsigned __int16)GetSpritePaletteTagByPaletteNum(a1);
  if ( v2 != 0xFFFF )
  {
    v3 = 0;
    while ( !((unsigned __int8)gSprites[68 * v3 + 62] << 31)
         || (unsigned int)(unsigned __int8)gSprites[68 * v3 + 5] >> 4 != v1 )
    {
      v3 = (v3 + 1) & 0xFF;
      if ( v3 > 0x3F )
      {
        FreeSpritePaletteByTag(v2);
        return v5;
      }
    }
  }
  return v5;
}
