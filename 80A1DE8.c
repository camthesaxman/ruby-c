int __fastcall sub_80A1DE8(int a1, int a2, int a3)
{
  unsigned __int16 v3; // r0@1
  unsigned __int8 v4; // r0@1
  int v5; // r4@1
  unsigned __int8 v6; // r0@1
  int v8; // [sp+4h] [bp-4h]@0

  v3 = GetMonData(a1, 38, a3);
  v4 = ball_number_to_ball_processing_index(v3);
  v5 = v4;
  sub_80478DC(v4);
  v6 = CreateSprite((int)&gSpriteTemplate_820AAB4[24 * v5], 6, 136);
  v201800D = v6;
  dword_2020020[17 * v6] = (int)SpriteCallbackDummy;
  gSprites[68 * v201800D + 5] |= 0xCu;
  return v8;
}
