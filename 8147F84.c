unsigned int __fastcall sub_8147F84(int a1, int a2, int a3)
{
  int v3; // r5@1
  unsigned __int16 v4; // r4@1
  unsigned int v5; // r0@1
  unsigned int v6; // r8@1
  char *v7; // r6@1
  unsigned int v8; // r3@2

  v3 = a1;
  v4 = GetMonData(a1, 65, a3);
  v5 = CreateSprite(33705612, 48, 80) << 24;
  v6 = v5 >> 24;
  word_3005F24 = v4;
  byte_3005F2C = BYTE3(v5);
  byte_3005F30 = GetNature(v3);
  v7 = &gSprites[68 * v6];
  *((_WORD *)v7 + 25) = v4;
  dword_2020020[17 * v6] = (int)SpriteCallbackDummy;
  byte_3005F28 = 1;
  if ( !(sub_8040A3C(v4) << 24) )
  {
    *((_DWORD *)&unk_2020014 + 17 * v6) = &gSpriteAffineAnimTable_84120EC;
    v8 = (unsigned __int8)v7[1] | 3;
    v7[1] = v8;
    CalcCenterToCornerVec((int)&gSprites[68 * v6], v8 >> 6, (unsigned int)(unsigned __int8)v7[3] >> 6, v8 & 3);
    byte_3005F28 = 0;
  }
  return v6;
}
