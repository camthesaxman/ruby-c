int __fastcall sub_8140454(int a1)
{
  int v1; // r6@1
  __int16 v2; // r0@1
  int v3; // r0@3
  int v5; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 54) + 1;
  *(_WORD *)(v1 + 54) = v2;
  if ( v2 != 40 )
  {
    if ( v2 == 95 )
    {
      v2024E6D = 0;
      v3 = sub_8043EB4(1);
      m4aMPlayAllStop(v3);
      audio_play(0x173u);
    }
    else if ( v2 == 315 )
    {
      FreeOamMatrix((unsigned int)(unsigned __int8)gSprites[68 * *(_BYTE *)(v202F7C9 + 0x2024BE0) + 3] << 26 >> 27);
      DestroySprite((int)&gSprites[68 * *(_BYTE *)(v202F7C9 + 0x2024BE0)]);
      *(_WORD *)(v1 + 46) = 0;
      *(_DWORD *)(v1 + 28) = sub_81404E4;
    }
  }
  return v5;
}
