int __fastcall sub_8142DF4(unsigned __int8 a1)
{
  int v1; // r6@1
  int *v2; // r4@2
  unsigned int v3; // r5@3
  int v4; // r1@4
  char *v5; // r4@5
  unsigned __int16 v6; // r0@5
  int *v7; // r1@7
  int *v8; // r1@18
  int *v9; // r2@21
  int v11; // [sp+18h] [bp-4h]@0

  v1 = a1;
  if ( word_300179E & 1 )
  {
    v2 = &dword_3004B20[10 * a1];
    if ( *((_WORD *)v2 + 4) )
    {
      --*((_WORD *)v2 + 4);
      v3 = 0;
      do
      {
        v4 = *(&byte_3004B28[40 * v1] + 2 * (v3 + 5));
        if ( v4 != 255 )
        {
          v5 = &gSprites[68 * v4];
          v6 = GetSpritePaletteTagByPaletteNum((unsigned int)(unsigned __int8)v5[5] >> 4);
          FreeSpritePaletteByTag(v6);
          DestroySprite((int)v5);
        }
        v3 = (v3 + 1) & 0xFFFF;
      }
      while ( v3 <= 5 );
      v7 = &dword_3004B20[10 * v1];
      if ( *((_WORD *)v7 + 5) )
        --*((_WORD *)v7 + 5);
      *v7 = (int)sub_8142B04;
    }
    else
    {
      if ( sub_80753C4() << 24 )
      {
        sub_8075398();
        m4aMPlayVolumeControl(&unk_3007380, 0xFFFF, 256);
      }
      *v2 = (int)sub_8142F78;
    }
  }
  else if ( word_300179E & 2 )
  {
    if ( sub_80753C4() << 24 )
    {
      sub_8075398();
      m4aMPlayVolumeControl(&unk_3007380, 0xFFFF, 256);
    }
    dword_3004B20[10 * v1] = (int)sub_8142F78;
  }
  else if ( word_300179E & 0x40 && (v8 = &dword_3004B20[10 * a1], *((_WORD *)v8 + 6)) )
  {
    --*((_WORD *)v8 + 6);
    *v8 = (int)sub_8142CC8;
  }
  else if ( word_300179E & 0x80 )
  {
    v9 = &dword_3004B20[10 * a1];
    if ( *((_WORD *)v9 + 6) < *((_WORD *)v9 + 8) - 1 )
    {
      ++*((_WORD *)v9 + 6);
      *v9 = (int)sub_8142CC8;
    }
  }
  return v11;
}
