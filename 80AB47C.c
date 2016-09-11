int sub_80AB47C()
{
  signed int v0; // r2@8
  unsigned int v1; // r3@8
  int v3; // [sp+0h] [bp-18h]@9
  int v4; // [sp+14h] [bp-4h]@16

  if ( byte_3001BAC == 1 )
  {
    sub_80AB350();
    goto _080AB56C;
  }
  if ( (signed int)(unsigned __int8)byte_3001BAC <= 1 )
  {
    if ( !byte_3001BAC )
    {
      SetVBlankCallback(0);
      sub_80AB320();
      sub_80AB1BC();
      dp12_8087EA4();
      ResetPaletteFade();
      v202F390 |= 0x80u;
      v0 = 100663296;
      v1 = 98304;
      do
      {
        v3 = 0;
        v40000D4 = &v3;
        v40000D8 = v0;
        v40000DC = -2063596544;
        v0 += 4096;
        v1 -= 4096;
      }
      while ( v1 > 0x1000 );
      v3 = 0;
      v40000D4 = &v3;
      v40000D8 = v0;
      v40000DC = (v1 >> 2) | 0x85000000;
      ResetSpriteData();
      ResetTasks();
      FreeAllSpritePalettes();
      gReservedSpritePaletteCount = 4;
      v2018000 = 0;
      sub_8040710();
      sub_80AB398();
      ++byte_3001BAC;
    }
    return v4;
  }
  if ( byte_3001BAC == 2 )
  {
    if ( !(sub_80AB70C(33657437) << 24) )
      return v4;
    v201925D = 0;
_080AB56C:
    ++byte_3001BAC;
    return v4;
  }
  if ( byte_3001BAC == 3 )
  {
    sub_80B2184();
    word_30042C0 = 0;
    word_30041B4 = 0;
    BeginFastPaletteFade(2u);
    v202F390 &= 0x7Fu;
    SetVBlankCallback((int)sub_80ABAC4);
    v201920C = CreateTask((int)sub_80AB5D4, 10);
    SetMainCallback2((int)sub_80ABAAC);
  }
  return v4;
}
