int __fastcall sub_8149558(int a1)
{
  int v1; // r4@1
  signed int v2; // r0@2
  char *v3; // r1@7
  char v4; // r0@7
  unsigned int v5; // r2@9
  int v7; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( (signed int)*(_WORD *)(a1 + 34) <= 8 )
  {
    DestroySprite(a1);
  }
  else
  {
    *(_WORD *)(a1 + 34) = 88 - *(_WORD *)(a1 + 60) * (signed int)*(_WORD *)(a1 + 60) / 80;
    v2 = (signed __int16)sine(*(_WORD *)(a1 + 58) & 0xFF, *(_WORD *)(a1 + 56));
    if ( (signed __int16)v2 < 0 )
      v2 += 3;
    *(_WORD *)(v1 + 38) = v2 >> 2;
    *(_WORD *)(v1 + 36) = cosine(*(_WORD *)(v1 + 58) & 0xFF, *(_WORD *)(v1 + 56));
    *(_WORD *)(v1 + 58) += 4;
    if ( *(_WORD *)(v1 + 60) & 1 )
      --*(_WORD *)(v1 + 56);
    ++*(_WORD *)(v1 + 60);
    if ( (signed int)*(_WORD *)(v1 + 38) <= 0 )
    {
      v3 = (char *)(v1 + 67);
      v4 = 20;
    }
    else
    {
      v3 = (char *)(v1 + 67);
      v4 = 1;
    }
    *v3 = v4;
    v5 = (*(_WORD *)(v1 + 56) / 4 + 20) & 0xFF;
    if ( v5 > 0x1F )
      LOBYTE(v5) = 31;
    *(_BYTE *)(v1 + 3) = *(_BYTE *)(v1 + 3) & 0xC1 | 2 * (v5 & 0x1F);
  }
  return v7;
}
