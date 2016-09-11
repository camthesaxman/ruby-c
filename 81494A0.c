int __fastcall sapphire_sub_81494A0(int a1, __int16 a2)
{
  __int16 v2; // r4@1
  __int16 v3; // r5@1
  int v4; // r6@1
  unsigned int v5; // r4@1

  v2 = a1;
  v3 = a2;
  v4 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_8416D94, (unsigned int)((a1 << 16) - 0x200000) >> 16, a2);
  v5 = 68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_8416D94, v2 + 32, v3);
  *(_WORD *)&gSprites[v5 + 46] = v4;
  StartSpriteAnim((int)&gSprites[v5], 1);
  dword_2020020[v5 / 4] = (int)sub_81493C4;
  return v4;
}
