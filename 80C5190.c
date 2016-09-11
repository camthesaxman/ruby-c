int __fastcall sub_80C5190(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int *v2; // r4@1
  signed int v3; // r0@1
  char *v4; // r5@8
  unsigned __int16 v5; // r0@8
  int v7; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( v3 != 1 )
  {
    if ( v3 <= 1 )
    {
      if ( *((_WORD *)v2 + 4) )
        return v7;
      goto _080C51F8;
    }
    if ( v3 == 2 )
    {
      v4 = &gSprites[68 * *((_WORD *)v2 + 6)];
      v5 = GetSpritePaletteTagByPaletteNum((unsigned int)(unsigned __int8)v4[5] >> 4);
      FreeSpritePaletteByTag(v5);
      if ( (unsigned __int8)v4[1] << 30 )
        FreeOamMatrix((unsigned int)(unsigned __int8)v4[3] << 26 >> 27);
      DestroySprite((int)v4);
_080C51F8:
      ++*((_WORD *)v2 + 4);
      return v7;
    }
    if ( v3 == 3 )
    {
      MenuZeroFillWindowRect(
        *((_BYTE *)v2 + 14),
        *((_BYTE *)v2 + 16),
        *((_BYTE *)v2 + 14) + 9,
        *((_BYTE *)v2 + 16) + 10);
      DestroyTask(v1);
    }
  }
  return v7;
}
