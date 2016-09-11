int __fastcall sub_80466F4(int a1)
{
  int v1; // r6@1
  __int16 v2; // r0@1
  int v4; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 56) + 1;
  *(_WORD *)(v1 + 56) = v2;
  if ( v2 == 10 )
  {
    *(_WORD *)(v1 + 56) = 0;
    *(_DWORD *)(v1 + 28) = sub_8046760;
    StartSpriteAffineAnim((int)&gSprites[68 * *(_BYTE *)(*(_WORD *)(v1 + 58) + 0x2024BE0)], 2);
    AnimateSprite((int)&gSprites[68 * *(_BYTE *)(*(_WORD *)(v1 + 58) + 0x2024BE0)]);
    *(_WORD *)&gSprites[68 * *(_BYTE *)(*(_WORD *)(v1 + 58) + 0x2024BE0) + 48] = 0;
  }
  return v4;
}
