int __fastcall sub_814580C(int a1)
{
  char *v1; // r1@1
  char v2; // r1@4
  int v3; // r1@4
  int v5; // [sp+4h] [bp-4h]@0

  v1 = &gSprites[68 * *(_WORD *)(a1 + 46)];
  if ( *((_WORD *)v1 + 23) == 10 || v203935C )
  {
    DestroySprite(a1);
  }
  else
  {
    *(_BYTE *)(a1 + 62) = *(_BYTE *)(a1 + 62) & 0xFB | v1[62] & 4;
    v2 = *(_BYTE *)(a1 + 1) & 0xF3 | gSprites[68 * *(_WORD *)(a1 + 46) + 1] & 0xC;
    *(_BYTE *)(a1 + 1) = v2;
    *(_BYTE *)(a1 + 1) = v2 & 0xFC | gSprites[68 * *(_WORD *)(a1 + 46) + 1] & 3;
    *(_BYTE *)(a1 + 3) = *(_BYTE *)(a1 + 3) & 0xC1 | gSprites[68 * *(_WORD *)(a1 + 46) + 3] & 0x3E;
    v3 = *(_WORD *)(a1 + 46);
    *(_WORD *)(a1 + 32) = *(_WORD *)&gSprites[68 * v3 + 32];
    *(_WORD *)(a1 + 34) = *(_WORD *)&gSprites[68 * v3 + 34];
  }
  return v5;
}
