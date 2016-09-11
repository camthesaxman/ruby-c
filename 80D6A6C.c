int __fastcall sub_80D6A6C(int a1)
{
  int v1; // r4@1
  __int16 v2; // r1@1
  int v3; // r3@1
  unsigned int v4; // r2@1
  int v6; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = word_3004B00[0] + *(_WORD *)(a1 + 32);
  *(_WORD *)(a1 + 32) = v2;
  *(_WORD *)(a1 + 34) += word_3004B02;
  v3 = *(_BYTE *)(a1 + 67);
  v4 = 68 * (unsigned __int8)CreateSprite((int)&gBattleAnimSpriteTemplate_83D9950, v2 + 32, *(_WORD *)(a1 + 34));
  *(_WORD *)&gSprites[v4 + 4] = *(_WORD *)&gSprites[v4 + 4] & 0xFC00 | ((*(_WORD *)&gSprites[v4 + 4] & 0x3FF) + 8) & 0x3FF;
  ++v202F7B2;
  dword_2020020[v4 / 4] = (int)sub_80D6AF0;
  *(_DWORD *)(v1 + 28) = sub_80D6AF0;
  return v6;
}
