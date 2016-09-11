int __fastcall sub_813D158(int a1)
{
  int v1; // r4@1
  char *v2; // r1@1
  int v3; // r1@3
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = &gSprites[68 * *(_WORD *)(a1 + 60)];
  if ( *((_WORD *)v2 + 30) )
  {
    *(_BYTE *)(a1 + 62) |= 4u;
    *(_WORD *)(a1 + 32) += *(_WORD *)(a1 + 36);
    *(_WORD *)(a1 + 34) += *(_WORD *)(a1 + 38);
    StartSpriteAnim(a1, 3);
    *(_WORD *)(v1 + 50) = 1024;
    *(_WORD *)(v1 + 52) = 8 * (*(_WORD *)(v1 + 48) & 3);
    *(_DWORD *)(v1 + 28) = sub_813D0CC;
    *(_BYTE *)(v1 + 1) = *(_BYTE *)(v1 + 1) & 0x3F | 0x40;
    *(_BYTE *)(v1 + 3) |= 0xC0u;
    CalcCenterToCornerVec(v1, 1, 3, 2);
  }
  else
  {
    *(_WORD *)(a1 + 36) = *((_WORD *)v2 + 18);
    v3 = *(_WORD *)(a1 + 60);
    *(_WORD *)(a1 + 38) = *(_WORD *)&gSprites[68 * v3 + 38];
    *(_WORD *)(a1 + 32) = *(_WORD *)&gSprites[68 * v3 + 32];
    *(_WORD *)(a1 + 34) = *(_WORD *)&gSprites[68 * v3 + 34];
  }
  return v5;
}
