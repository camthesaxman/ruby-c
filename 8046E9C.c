int __fastcall sub_8046E9C(int a1)
{
  int v1; // r5@1
  signed int v2; // r7@1
  int v3; // r4@1
  _BYTE *v4; // r3@1
  char *v5; // r0@1
  int v6; // r3@8
  _BYTE *v7; // r2@8
  signed int v8; // r4@8
  signed int v9; // r4@13
  int v11; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  v3 = *(_WORD *)(a1 + 58) & 0xFF;
  v4 = (_BYTE *)(v3 + 33704928);
  v5 = &gSprites[68 * *(_BYTE *)(v3 + 0x2024BE0) + 62];
  *v5 &= 0xFBu;
  if ( *(_BYTE *)(v1 + 63) & 0x10 )
    *(_BYTE *)(v1 + 62) |= 4u;
  if ( gSprites[68 * *v4 + 63] & 0x20 )
  {
    StartSpriteAffineAnim((int)&gSprites[68 * *v4], 0);
    v2 = 1;
  }
  else
  {
    *(_WORD *)&gSprites[68 * *v4 + 48] -= 288;
    *(_WORD *)&gSprites[68 * *(_BYTE *)(v3 + 33704928) + 38] = *(_WORD *)&gSprites[68 * *(_BYTE *)(v3 + 33704928) + 48] << 16 >> 24;
  }
  if ( *(_BYTE *)(v1 + 63) & 0x10 && v2 )
  {
    *(_WORD *)&gSprites[68 * *(_BYTE *)(v3 + 33704928) + 38] = 0;
    v2024E6D = 0;
    *(_BYTE *)(12 * v3 + 0x2017810) &= 0xF7u;
    FreeSpriteOamMatrix(v1);
    DestroySprite(v1);
    v6 = 0;
    v7 = (_BYTE *)33650704;
    v8 = 3;
    do
    {
      if ( !(*v7 & 8) )
        ++v6;
      v7 += 12;
      --v8;
    }
    while ( v8 >= 0 );
    if ( v6 == 4 )
    {
      v9 = 0;
      do
        sub_804794C((unsigned __int8)v9++);
      while ( v9 <= 11 );
    }
  }
  return v11;
}
