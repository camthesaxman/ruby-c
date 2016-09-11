int __fastcall sub_804FC48(unsigned __int16 a1, int a2)
{
  int v2; // r7@1
  int v3; // r8@1
  unsigned __int8 v4; // r0@1
  int v5; // r2@1
  int v6; // r4@2
  int v7; // r0@2
  int v9; // [sp+14h] [bp-4h]@0

  v2 = a1;
  v3 = a1;
  v4 = CreateSprite(
         (int)&gSpriteTemplate_821645C,
         (unsigned __int8)gUnknown_082162E4[2 * a2 & 0x1FF] - 10 * gUnknown_082162CC[2 * a2 & 0x1FF],
         (unsigned __int8)byte_82162E5[2 * a2 & 0x1FF] - 10 * gUnknown_082162CC[(2 * a2 & 0x1FF) + 1]);
  v5 = v4;
  if ( v2 == 17699 )
  {
    v6 = 17 * v4;
    StartSpriteAnim((int)&gSprites[68 * v4], 2);
    dword_2020020[v6] = (int)sub_8051684;
    v7 = audio_play(40);
  }
  else if ( v2 == 21554 )
  {
    StartSpriteAnim((int)&gSprites[68 * v4], 0);
    v7 = audio_play(31);
  }
  else
  {
    v7 = 9029;
    if ( v3 == 9029 )
    {
      StartSpriteAnim((int)&gSprites[68 * v5], 1);
      v7 = audio_play(32);
    }
  }
  sub_805156C(v7);
  return v9;
}
