int __fastcall sub_81398BC(unsigned __int8 a1)
{
  int v1; // r6@1
  _WORD *v2; // r2@1
  __int16 v3; // r8@1
  _BYTE *v4; // r9@1
  unsigned __int8 v5; // r0@1
  __int16 v6; // r5@1
  __int16 v7; // r4@1
  char *v8; // r1@1
  char *v9; // r0@1
  int v11; // [sp+18h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(4 * a1 + 0x2017802) = 0;
  v2 = (_WORD *)(2 * a1 + 33704554);
  *v2 = *(_BYTE *)((a1 << 9) + 0x2023A61);
  v3 = GetMonData((int)&dword_3004360[25 * *(_WORD *)(2 * a1 + 0x2024A6A)], 11, (int)v2);
  v4 = &byte_300434C[v1];
  byte_300434C[v1] = object_new_hidden_with_callback((int)sub_80312F0);
  v5 = battle_get_per_side_status(v1);
  GetMonSpriteTemplate_803C56C(v3, v5);
  v6 = (unsigned __int8)sub_8077ABC(v1, 2u);
  v7 = (unsigned __int8)sub_8077F68(v1);
  sub_8079E90(v1);
  *(_BYTE *)(v1 + 33704928) = CreateSprite(33705612, v6, v7);
  *(_WORD *)&gSprites[68 * *v4 + 48] = *(_BYTE *)(v1 + 33704928);
  *(_WORD *)&gSprites[68 * *(_BYTE *)(v1 + 33704928) + 46] = v1;
  *(_WORD *)&gSprites[68 * *(_BYTE *)(v1 + 33704928) + 50] = v3;
  v8 = &gSprites[68 * *(_BYTE *)(v1 + 33704928)];
  v8[5] = v8[5] & 0xF | 16 * v1;
  StartSpriteAnim((int)&gSprites[68 * *(_BYTE *)(v1 + 33704928)], *(_BYTE *)(v1 + 33705604));
  v9 = &gSprites[68 * *(_BYTE *)(v1 + 33704928) + 62];
  *v9 |= 4u;
  dword_2020020[17 * *(_BYTE *)(v1 + 33704928)] = (int)SpriteCallbackDummy;
  *(_WORD *)&gSprites[68 * *v4 + 46] = (unsigned __int8)sub_8046400(0, 0xFFu);
  return v11;
}
