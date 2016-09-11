int __fastcall sub_81406BC(int a1)
{
  int v1; // r7@1
  signed int v2; // r5@1
  char *v3; // r1@5
  char *v4; // r1@5
  char *v5; // r2@8
  int v7; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  if ( *(_BYTE *)(a1 + 63) & 0x10 )
    *(_BYTE *)(a1 + 62) |= 4u;
  if ( gSprites[68 * *(_BYTE *)(v202F7C9 + 0x2024BE0) + 63] & 0x20 )
  {
    StartSpriteAffineAnim((int)&gSprites[68 * *(_BYTE *)(v202F7C9 + 0x2024BE0)], 0);
    v2 = 1;
  }
  else
  {
    v3 = &gSprites[68 * *(_BYTE *)(v202F7C9 + 0x2024BE0)];
    *((_WORD *)v3 + 24) -= 288;
    v4 = &gSprites[68 * *(_BYTE *)(v202F7C9 + 0x2024BE0)];
    *((_WORD *)v4 + 19) = *((_WORD *)v4 + 24) << 16 >> 24;
  }
  if ( *(_BYTE *)(v1 + 63) & 0x10 && v2 )
  {
    *(_WORD *)&gSprites[68 * *(_BYTE *)(v202F7C9 + 0x2024BE0) + 38] = 0;
    v5 = &gSprites[68 * *(_BYTE *)(v202F7C9 + 0x2024BE0) + 62];
    *v5 = *v5 & 0xFB | 4 * ((unsigned int)v2017849 << 30 >> 31);
    *(_WORD *)(v1 + 46) = 0;
    *(_DWORD *)(v1 + 28) = sub_81405C8;
    v2024E6D = 0;
    sub_8043EB4(1);
  }
  return v7;
}
