int __fastcall sub_8149310(__int16 a1, __int16 a2)
{
  __int16 v2; // r5@1
  __int16 v3; // r4@1
  int v4; // r6@1

  v2 = a1;
  v3 = a2;
  v4 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_8416CDC, a1, a2);
  *(_WORD *)&gSprites[68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_8416D2C, v2, v3 + 8) + 46] = v4;
  return v4;
}
