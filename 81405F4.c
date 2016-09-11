int __fastcall sub_81405F4(int a1)
{
  int v1; // r4@1
  signed int v2; // r5@1
  char *v3; // r0@4
  int v5; // [sp+10h] [bp-4h]@0

  v1 = a1;
  StartSpriteAnim(a1, 1);
  StartSpriteAffineAnim(v1, 0);
  *(_DWORD *)(v1 + 28) = sub_81406BC;
  v2 = (unsigned __int8)ball_number_to_ball_processing_index(v2024C04);
  if ( v2 <= 11 && v2 >= 0 )
  {
    sub_814086C(*(_WORD *)(v1 + 32) & 0xFF, (*(_WORD *)(v1 + 34) - 5) & 0xFF, 1, 28);
    sub_8141314(1, v202F7C9, 14, v2);
  }
  v3 = &gSprites[68 * *(_BYTE *)(v202F7C9 + 0x2024BE0) + 62];
  *v3 &= 0xFBu;
  StartSpriteAffineAnim((int)&gSprites[68 * *(_BYTE *)(v202F7C9 + 0x2024BE0)], 1);
  AnimateSprite((int)&gSprites[68 * *(_BYTE *)(v202F7C9 + 0x2024BE0)]);
  *(_WORD *)&gSprites[68 * *(_BYTE *)(v202F7C9 + 0x2024BE0) + 48] = 4096;
  return v5;
}
