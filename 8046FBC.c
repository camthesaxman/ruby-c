int __fastcall sub_8046FBC(int a1)
{
  int v1; // r6@1
  int v2; // r7@1
  __int16 v3; // r0@1
  int v5; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 58) & 0xFF;
  v3 = *(_WORD *)(a1 + 54) + 1;
  *(_WORD *)(v1 + 54) = v3;
  if ( v3 != 40 )
  {
    if ( v3 == 95 )
    {
      v2024E6D = 0;
      m4aMPlayAllStop(33705581);
      audio_play(371);
    }
    else if ( v3 == 315 )
    {
      FreeOamMatrix((unsigned int)(unsigned __int8)gSprites[68 * *(_BYTE *)(*(_WORD *)(v1 + 58) + 0x2024BE0) + 3] << 26 >> 27);
      DestroySprite((int)&gSprites[68 * *(_BYTE *)(*(_WORD *)(v1 + 58) + 0x2024BE0)]);
      DestroySpriteAndFreeResources(v1);
      if ( byte_3001BAD & 2 )
        *(_BYTE *)(12 * v2 + 0x2017810) &= 0xF7u;
    }
  }
  return v5;
}
