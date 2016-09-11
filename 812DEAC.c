int __fastcall sub_812DEAC(int a1)
{
  int v1; // r7@1
  unsigned int v2; // r0@1
  unsigned int v3; // r5@1
  signed int v4; // r1@1
  int v5; // r3@3
  int v6; // r9@3
  int v7; // r3@3
  int v8; // r8@3
  char *v9; // r5@3
  char *v10; // r4@3
  int v12; // [sp+20h] [bp-4h]@0

  v1 = a1;
  v2 = Random() << 16;
  v3 = (v2 & 0x3F0000) >> 16;
  v4 = (v2 & 0x3F0000) >> 16;
  if ( v4 > 31 )
    v3 = (32 - v4) & 0xFFFF;
  *(_WORD *)(v1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C8, 0) + (_WORD)v3;
  *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v202F7C8, 1u) + 32;
  *(_WORD *)(v1 + 48) = word_3004B00[0];
  *(_WORD *)(v1 + 50) = word_3004B02;
  v5 = *(_BYTE *)(v1 + 67);
  v6 = (unsigned __int8)CreateSprite((int)&gBattleAnimSpriteTemplate_84025EC, *(_WORD *)(v1 + 32), *(_WORD *)(v1 + 34));
  v7 = *(_BYTE *)(v1 + 67);
  v8 = (unsigned __int8)CreateSprite((int)&gBattleAnimSpriteTemplate_84025EC, *(_WORD *)(v1 + 32), *(_WORD *)(v1 + 34));
  v9 = &gSprites[68 * v6];
  StartSpriteAnim((int)v9, 1);
  v10 = &gSprites[68 * v8];
  StartSpriteAnim((int)v10, 2);
  *((_WORD *)v9 + 24) = word_3004B00[0];
  *((_WORD *)v9 + 25) = word_3004B02;
  *((_WORD *)v10 + 24) = word_3004B00[0];
  *((_WORD *)v10 + 25) = word_3004B02;
  *((_WORD *)v9 + 30) = -1;
  *((_WORD *)v10 + 30) = -1;
  v9[62] |= 4u;
  v10[62] |= 4u;
  dword_2020020[17 * v6] = (int)sub_812E0F8;
  dword_2020020[17 * v8] = (int)sub_812E0F8;
  *(_WORD *)(v1 + 58) = v6;
  *(_WORD *)(v1 + 60) = v8;
  *(_DWORD *)(v1 + 28) = sub_812DFEC;
  return v12;
}
