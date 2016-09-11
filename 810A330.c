int __fastcall sub_810A330(unsigned __int8 a1)
{
  int v1; // r4@1
  char v2; // r0@1
  int *v3; // r5@8
  char *v4; // r4@8
  unsigned __int16 v5; // r0@8
  char *v6; // r4@8
  int v8; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = ProcessMenuInputNoWrap_();
  if ( v2 )
  {
    if ( v2 > 0 )
    {
      if ( v2 != 1 )
        return v8;
    }
    else if ( v2 != -1 )
    {
      return v8;
    }
    audio_play(5u);
    MenuZeroFillWindowRect(0x15u, 7u, 0x1Bu, 0xCu);
    v3 = &dword_3004B20[10 * v1];
    v4 = &gSprites[68 * *((_BYTE *)v3 + 10)];
    v5 = GetSpritePaletteTagByPaletteNum((unsigned int)(unsigned __int8)v4[5] >> 4);
    FreeSpritePaletteByTag(v5);
    FreeOamMatrix((unsigned int)(unsigned __int8)v4[3] << 26 >> 27);
    DestroySprite((int)v4);
    v6 = &gSprites[68 * *((_BYTE *)v3 + 12)];
    FreeOamMatrix((unsigned int)(unsigned __int8)v6[3] << 26 >> 27);
    DestroySprite((int)v6);
    *v3 = (int)sub_810A3F4;
  }
  else
  {
    v202E8DC = dword_3004B20[10 * v1 + 2];
    SetMainCallback2(dword_3001778);
  }
  return v8;
}
