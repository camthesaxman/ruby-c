int __fastcall sub_813FA94(unsigned __int8 a1)
{
  int v1; // r10@1
  unsigned __int8 v2; // r0@1
  unsigned __int8 v3; // r0@1
  __int16 v4; // r5@1
  unsigned int v5; // r4@1
  char *v6; // r6@1
  int *v7; // r0@1
  int v9; // [sp+18h] [bp-4h]@0

  v1 = a1;
  v2 = ball_number_to_ball_processing_index(v2024C04);
  v3 = CreateSprite((int)&gSpriteTemplate_820AAB4[24 * v2], 32, 80);
  v4 = v3;
  v5 = 68 * v3;
  v6 = &gSprites[v5];
  *(_WORD *)&gSprites[v5 + 46] = 34;
  *((_WORD *)v6 + 24) = (unsigned __int8)sub_8077ABC(v202F7C9, 0);
  *((_WORD *)v6 + 25) = (unsigned __int8)sub_8077ABC(v202F7C9, 1u) - 16;
  dword_2020020[v5 / 4] = (int)sub_813FD90;
  v2017849 = v2017849 & 0xFD | 2
                             * ((unsigned int)(unsigned __int8)gSprites[68 * *(_BYTE *)(v202F7C9 + 0x2024BE0) + 62] << 29 >> 31);
  v7 = &dword_3004B20[10 * v1];
  *((_WORD *)v7 + 4) = v4;
  *v7 = (int)sub_813FB7C;
  return v9;
}
