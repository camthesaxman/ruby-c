int __fastcall sub_804748C(int a1)
{
  int v1; // r4@1
  signed int v2; // r12@1
  signed int v3; // r6@1
  int v4; // r3@1
  char *v5; // r5@3
  int v6; // r2@5
  signed int v7; // kr04_4@5
  __int16 v8; // r1@5
  int v9; // r2@5
  int v10; // r0@6
  int v12; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  v3 = 0;
  v4 = *(_WORD *)(a1 + 46) & 0xFF;
  if ( *(_BYTE *)(a1 + 63) & 0x10 )
    *(_BYTE *)(a1 + 62) |= 4u;
  v5 = &gSprites[68 * v4];
  if ( v5[63] & 0x20 )
  {
    StartSpriteAffineAnim((int)&gSprites[68 * v4], 0);
    v2 = 1;
  }
  v6 = *(_WORD *)(v1 + 60);
  v7 = (*(_WORD *)(v1 + 58) - *(_WORD *)(v1 + 34)) * v6;
  v8 = *(_WORD *)(v1 + 34);
  *((_WORD *)v5 + 16) = (*(_WORD *)(v1 + 56) - (signed int)*(_WORD *)(v1 + 32)) * v6 / 128 + *(_WORD *)(v1 + 32);
  *((_WORD *)v5 + 17) = v7 / 128 + v8;
  v9 = *(_WORD *)(v1 + 60);
  if ( (signed int)*(_WORD *)(v1 + 60) > 127 )
  {
    *((_WORD *)v5 + 16) = *(_WORD *)(v1 + 56);
    *((_WORD *)v5 + 17) = *(_WORD *)(v1 + 58);
    *((_WORD *)v5 + 18) = 0;
    *((_WORD *)v5 + 19) = 0;
    v3 = 1;
  }
  else
  {
    v10 = 0xFFFF * (*(_WORD *)((char *)&gSineTable + (2 * v9 & 0x1FF)) / 8) & 0xFFFF;
    *(_WORD *)(v1 + 60) = v9 + 4;
    *((_WORD *)v5 + 18) = v10;
    *((_WORD *)v5 + 19) = v10;
  }
  if ( *(_BYTE *)(v1 + 63) & 0x10 && v2 && v3 )
    DestroySpriteAndFreeResources(v1);
  return v12;
}
