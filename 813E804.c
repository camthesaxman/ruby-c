int __fastcall sub_813E804(int a1)
{
  int v1; // r3@1
  char *v2; // r0@5
  __int16 v3; // r5@5
  char *v4; // r0@5
  char v5; // r0@6
  int v7; // [sp+10h] [bp-4h]@0

  v1 = a1;
  if ( v203931A )
  {
    DestroySprite(a1);
  }
  else
  {
    *(_BYTE *)(a1 + 62) = *(_BYTE *)(a1 + 62) & 0xFB | gSprites[68 * *(_WORD *)(a1 + 46) + 62] & 4;
    ++*(_WORD *)(a1 + 60);
    if ( (signed int)*(_WORD *)(a1 + 52) <= 39 )
      *(_WORD *)(a1 + 52) += 2;
    v2 = &gSprites[68 * *(_WORD *)(a1 + 46)];
    v3 = *(_WORD *)(v1 + 48);
    *(_WORD *)(v1 + 32) = *((_WORD *)v2 + 18)
                        + *((_WORD *)v2 + 16)
                        + *(_WORD *)(v1 + 52)
                        * (signed int)*(_WORD *)((char *)gSineTable + (2 * (*(_WORD *)(v1 + 48) + 64) & 0x1FF))
                        / 256;
    v4 = &gSprites[68 * *(_WORD *)(v1 + 46)];
    *(_WORD *)(v1 + 34) = *((_WORD *)v4 + 19)
                        + *((_WORD *)v4 + 17)
                        + *(_WORD *)(v1 + 52)
                        * (signed int)*(_WORD *)((char *)gSineTable + (2 * *(_WORD *)(v1 + 48) & 0x1FF))
                        / 512;
    *(_WORD *)(v1 + 48) = v3 + 2;
    *(_WORD *)(v1 + 38) = *(_WORD *)((char *)gSineTable + (2 * *(_WORD *)(v1 + 50) & 0x1FF)) / 32;
    *(_WORD *)(v1 + 50) += 8;
    if ( (signed int)(unsigned __int8)(v3 + 2) > 127 )
      v5 = gSprites[68 * *(_WORD *)(v1 + 46) + 67] + 1;
    else
      v5 = gSprites[68 * *(_WORD *)(v1 + 46) + 67] - 1;
    *(_BYTE *)(v1 + 67) = v5;
  }
  return v7;
}
