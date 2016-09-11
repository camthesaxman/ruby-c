int __fastcall sub_80473D0(int a1)
{
  int v1; // r6@1
  int v2; // r7@2
  __int16 v3; // r8@2
  int v4; // r4@2
  int v5; // r5@3
  int v7; // [sp+14h] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 48) )
  {
    --*(_WORD *)(a1 + 48);
  }
  else
  {
    v2 = *(_WORD *)(a1 + 46) & 0xFF;
    v3 = *(_WORD *)(a1 + 50) & 0xFF;
    v4 = *(_WORD *)(a1 + 52) | (*(_WORD *)(a1 + 54) << 16);
    if ( *(_BYTE *)(a1 + 67) )
      v5 = (*(_BYTE *)(a1 + 67) - 1) & 0xFF;
    else
      LOBYTE(v5) = 0;
    StartSpriteAnim(a1, 1);
    sub_80472B0(*(_BYTE *)(v1 + 32), *(_WORD *)(v1 + 34) - 5, (unsigned int)*(_BYTE *)(v1 + 5) << 28 >> 30, v5);
    *(_WORD *)(v1 + 48) = (unsigned __int8)sub_80472D8(1u, v3, v4);
    *(_DWORD *)(v1 + 28) = sub_804748C;
    gSprites[68 * v2 + 62] &= 0xFBu;
    StartSpriteAffineAnim((int)&gSprites[68 * v2], 1);
    AnimateSprite((int)&gSprites[68 * v2]);
    *(_WORD *)&gSprites[68 * v2 + 48] = 4096;
    *(_WORD *)(v1 + 60) = 0;
  }
  return v7;
}
