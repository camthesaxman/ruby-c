int __fastcall sub_80D90F4(int a1)
{
  int v1; // r5@1
  _BYTE *v2; // r0@2
  int v3; // r8@4
  int v4; // r0@6
  unsigned int v5; // r6@6
  int v6; // r0@6
  unsigned int v7; // r4@8
  int v8; // r6@8
  unsigned int v9; // r4@8
  int v10; // r3@14
  int v11; // r0@14
  int v13; // [sp+18h] [bp-4h]@0

  v1 = a1;
  if ( word_3004B00[0] )
    v2 = (_BYTE *)33748937;
  else
    v2 = (_BYTE *)33748936;
  v3 = *v2;
  if ( word_3004B04 < 0 )
    word_3004B04 = (unsigned __int16)Random() % 5u;
  StartSpriteAnim(v1, word_3004B04);
  *(_WORD *)(v1 + 32) = (unsigned __int8)sub_8077ABC(v3, 2u);
  *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v3, 3u);
  v4 = sub_807A100(v3, 1u);
  v5 = ((signed __int16)v4 + ((unsigned int)(v4 << 16) >> 31)) << 15 >> 16;
  v6 = (signed __int16)sub_807A100(v3, 0);
  if ( (signed __int16)v6 < 0 )
    v6 += 3;
  v7 = (unsigned int)(v6 << 14) >> 16;
  v8 = (unsigned __int16)Random() % (signed int)(signed __int16)v5 & 0xFFFF;
  v9 = (unsigned __int16)Random() % (signed int)(signed __int16)v7 & 0xFFFF;
  if ( Random() & 1 )
    v8 = 0xFFFF * v8 & 0xFFFF;
  if ( Random() & 1 )
    v9 = 0xFFFF * v9 & 0xFFFF;
  if ( !(*(_BYTE *)(v3 + 33704562) & 1) )
    v9 = ((v9 << 16) - 0x100000) >> 16;
  *(_WORD *)(v1 + 32) += v8;
  *(_WORD *)(v1 + 34) += v9;
  *(_WORD *)(v1 + 46) = word_3004B02;
  v10 = *(_BYTE *)(v1 + 67);
  v11 = (unsigned __int8)CreateSprite((int)&gBattleAnimSpriteTemplate_83DB4A8, *(_WORD *)(v1 + 32), *(_WORD *)(v1 + 34));
  *(_WORD *)(v1 + 60) = v11;
  if ( v11 != 64 )
  {
    StartSpriteAffineAnim((int)&gSprites[68 * *(_WORD *)(v1 + 60)], 0);
    dword_2020020[17 * *(_WORD *)(v1 + 60)] = (int)SpriteCallbackDummy;
  }
  *(_DWORD *)(v1 + 28) = sub_80D927C;
  return v13;
}
