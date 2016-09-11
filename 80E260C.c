int sub_80E260C()
{
  char *v0; // r1@1
  char *v1; // r0@1
  char *v2; // r0@2
  char v3; // r2@2
  char *v4; // r0@2
  char v5; // r1@2
  int v6; // r0@4
  int v8; // [sp+Ch] [bp-4h]@0

  v0 = &gSprites[68 * *(_BYTE *)(v202F7C8 + 0x2024BE0) + 62];
  *v0 &= 0xFDu;
  v1 = &gSprites[68 * *(_BYTE *)(v202F7C9 + 0x2024BE0) + 62];
  *v1 &= 0xFDu;
  if ( word_3004B08 == 2 )
  {
    v2 = &gSprites[68 * *(_BYTE *)(v202F7C8 + 0x2024BE0) + 62];
    v3 = 2;
    *v2 |= 2u;
    v4 = &gSprites[68 * *(_BYTE *)(v202F7C9 + 0x2024BE0) + 62];
    v5 = *v4;
  }
  else
  {
    if ( word_3004B08 )
      v6 = v202F7C9;
    else
      v6 = v202F7C8;
    v4 = &gSprites[68 * *(_BYTE *)(v6 + 33704928) + 62];
    v5 = *v4;
    v3 = 2;
  }
  *v4 = v5 | v3;
  return v8;
}
