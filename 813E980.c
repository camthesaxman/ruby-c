int __fastcall GetCurrentTrainerHillMapId(int a1)
{
  int v1; // r3@1
  __int16 v2; // r4@3
  unsigned int v3; // r0@3
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( v203931A )
  {
    DestroySprite(a1);
  }
  else
  {
    *(_BYTE *)(a1 + 62) = *(_BYTE *)(a1 + 62) & 0xFB | gSprites[68 * *(_WORD *)(a1 + 46) + 62] & 4;
    ++*(_WORD *)(a1 + 60);
    v2 = *(_WORD *)(a1 + 58) + 8;
    *(_WORD *)(a1 + 58) = v2;
    *(_WORD *)(a1 + 32) = *(_WORD *)(a1 + 58)
                        * (signed int)*(_WORD *)((char *)gSineTable + (2 * (*(_WORD *)(a1 + 52) + 64) & 0x1FF))
                        / 256
                        + *(_WORD *)(a1 + 54);
    *(_WORD *)(a1 + 34) = *(_WORD *)(a1 + 58)
                        * (signed int)*(_WORD *)((char *)gSineTable + (2 * *(_WORD *)(a1 + 52) & 0x1FF))
                        / 256
                        + *(_WORD *)(a1 + 56);
    v3 = *(_WORD *)(a1 + 58) / 16 & 0xFF;
    if ( v3 > 9 )
      LOBYTE(v3) = 9;
    *(_BYTE *)(v1 + 3) = *(_BYTE *)(v1 + 3) & 0xC1 | 2 * ((v3 + 18) & 0x1F);
    if ( v2 > 160 )
      DestroySprite(v1);
  }
  return v5;
}
