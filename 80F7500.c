signed int sub_80F7500()
{
  char v0; // r0@4
  char v1; // r0@7
  int v2; // r1@10
  char *v3; // r1@12
  char v4; // r2@12
  unsigned int v5; // r3@14
  int v7; // [sp+0h] [bp-3Ch]@1
  int v8; // [sp+18h] [bp-24h]@1
  __int16 v9; // [sp+1Ch] [bp-20h]@1
  __int16 v10; // [sp+1Eh] [bp-1Eh]@1
  void *v11; // [sp+20h] [bp-1Ch]@1
  signed __int16 v12; // [sp+24h] [bp-18h]@1
  __int16 v13; // [sp+26h] [bp-16h]@1
  char v14; // [sp+28h] [bp-14h]@1

  v8 = v20388B8 + 48;
  v9 = 4096;
  v10 = *v20388B8;
  v11 = &gPokenavConditionMenuMisc_Gfx;
  v12 = 1312;
  v13 = *v20388B8 + 1;
  memset(&v14, 0, 8);
  memcpy(&v7, (const char *)&v8, 24);
  if ( *(_BYTE *)(v20388B8 + 11) )
  {
    LoadTilesForSpriteSheets(&v7);
    *(_BYTE *)(v20388B8 + 11) = 0;
  }
  if ( word_300179E & 0x40 )
  {
    audio_play(5u);
    v0 = *(_BYTE *)(v20388B8 + 5) - 1;
    *(_BYTE *)(v20388B8 + 5) = v0;
    if ( v0 & 0x80 )
      *(_BYTE *)(v20388B8 + 5) = 5;
    return 1;
  }
  if ( word_300179E & 0x80 )
  {
    audio_play(5u);
    v1 = *(_BYTE *)(v20388B8 + 5) + 1;
    *(_BYTE *)(v20388B8 + 5) = v1;
    if ( v1 > 5 )
      *(_BYTE *)(v20388B8 + 5) = 0;
    return 1;
  }
  if ( word_300179E & 1 )
  {
    audio_play(5u);
    v2 = *(_BYTE *)(v20388B8 + 5);
    if ( v2 == 4 )
    {
      *(_BYTE *)(v20388B8 + 4) = 0;
      v5 = 0;
      do
      {
        *(_BYTE *)(v20388B8 + 4) |= *(_BYTE *)(v20388B8 + 6 + v5) << v5;
        v5 = (v5 + 1) & 0xFFFF;
      }
      while ( v5 <= 3 );
    }
    else if ( v2 != 5 )
    {
      v3 = (char *)(v20388B8 + 6 + v2);
      v4 = 0;
      if ( !*v3 )
        v4 = 1;
      *v3 = v4;
      return 1;
    }
  }
  else
  {
    if ( !(word_300179E & 2) )
      return 1;
    audio_play(5u);
  }
  return 0;
}
