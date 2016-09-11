int __fastcall sub_813E5E0(int a1)
{
  int v1; // r2@5
  int v3; // [sp+4h] [bp-4h]@0

  if ( v203931A )
  {
    DestroySprite(a1);
  }
  else
  {
    *(_BYTE *)(a1 + 62) = *(_BYTE *)(a1 + 62) & 0xFB | gSprites[68 * *(_WORD *)(a1 + 46) + 62] & 4;
    if ( (signed int)*(_WORD *)(a1 + 60) <= 11 )
      ++*(_WORD *)(a1 + 60);
    *(_WORD *)(a1 + 58) += 4;
    *(_WORD *)(a1 + 32) = *(_WORD *)(a1 + 58)
                        * (signed int)*(_WORD *)((char *)gSineTable + (2 * (*(_WORD *)(a1 + 52) + 64) & 0x1FF))
                        / 256
                        + *(_WORD *)(a1 + 54);
    v1 = *(_WORD *)(a1 + 58) * (signed int)*(_WORD *)((char *)gSineTable + (2 * *(_WORD *)(a1 + 52) & 0x1FF)) / 256
       + *(_WORD *)(a1 + 56);
    *(_WORD *)(a1 + 34) = v1;
    *(_WORD *)(a1 + 38) = *(_WORD *)(a1 + 60)
                        * (signed int)*(_WORD *)((char *)gSineTable + (2 * *(_WORD *)(a1 + 48) & 0x1FF))
                        / 256;
    *(_WORD *)(a1 + 48) += 16;
    if ( (signed __int16)v1 > (signed int)*(_WORD *)(a1 + 50) )
      DestroySprite(a1);
  }
  return v3;
}
