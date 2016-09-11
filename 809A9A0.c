char *__fastcall sub_809A9A0(__int16 a1, __int16 a2, char a3, char a4)
{
  char v4; // r7@1
  char v5; // r8@1
  int v6; // r0@1
  int v7; // r4@2
  char *v8; // r6@2
  char *result; // r0@2

  v4 = a3;
  v5 = a4;
  v6 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83BB2F0, a1, a2);
  if ( v6 == 64 )
  {
    result = 0;
  }
  else
  {
    v7 = 17 * v6;
    v8 = &gSprites[68 * v6];
    StartSpriteAnim((int)v8, v4 & 1);
    v8[5] = v8[5] & 0xF3 | 4 * (v5 & 3);
    dword_2020020[v7] = (int)SpriteCallbackDummy;
    result = v8;
  }
  return result;
}
