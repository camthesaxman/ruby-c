int __fastcall sub_813FBB8(unsigned __int8 a1)
{
  int v1; // r7@1
  signed __int16 v2; // r6@2
  signed __int16 v3; // r5@2
  int v4; // r4@4
  unsigned __int8 v5; // r0@4
  unsigned __int8 v6; // r0@4
  __int16 v7; // r5@4
  int v8; // r4@4
  char *v9; // r6@4
  unsigned __int8 v10; // r0@4
  int *v11; // r0@4
  int v13; // [sp+18h] [bp-4h]@0

  v1 = a1;
  if ( v20239F8 & 0x200 )
  {
    v2 = 32;
    v3 = 11;
  }
  else
  {
    v2 = 23;
    v3 = 5;
  }
  v4 = (unsigned __int8)ball_number_to_ball_processing_index(v2024C04);
  v5 = battle_get_side_with_given_state(1u);
  sub_8079E90(v5);
  v6 = CreateSprite((int)&gSpriteTemplate_820AAB4[24 * v4], v2 + 32, v3 | 0x50);
  v7 = v6;
  v8 = 17 * v6;
  v9 = &gSprites[68 * v6];
  *((_WORD *)v9 + 23) = 34;
  *((_WORD *)v9 + 24) = (unsigned __int8)sub_8077ABC(v202F7C9, 0);
  *((_WORD *)v9 + 25) = (unsigned __int8)sub_8077ABC(v202F7C9, 1u) - 16;
  dword_2020020[v8] = (int)SpriteCallbackDummy;
  v10 = battle_get_side_with_given_state(0);
  StartSpriteAnim((int)&gSprites[68 * *(_BYTE *)(v10 + 0x2024BE0)], 1);
  v11 = &dword_3004B20[10 * v1];
  *((_WORD *)v11 + 4) = v7;
  *v11 = (int)sub_813FCBC;
  return v13;
}
