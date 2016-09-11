int __fastcall sub_811F864(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r6@1
  _WORD *v3; // r2@1
  __int16 v4; // r8@1
  _BYTE *v5; // r9@1
  unsigned __int8 v6; // r0@1
  __int16 v7; // r5@1
  __int16 v8; // r4@1
  char *v9; // r1@1
  char *v10; // r0@1
  int v12; // [sp+18h] [bp-4h]@0

  v2 = a1;
  sub_8032AA8(a1, a2);
  v3 = (_WORD *)(2 * v2 + 33704554);
  *v3 = *(_BYTE *)((v2 << 9) + 0x2023A61);
  v4 = GetMonData((int)&dword_3004360[25 * *(_WORD *)(2 * v2 + 0x2024A6A)], 11, (int)v3);
  v5 = &byte_300434C[v2];
  byte_300434C[v2] = object_new_hidden_with_callback((int)sub_80312F0);
  v6 = battle_get_per_side_status(v2);
  GetMonSpriteTemplate_803C56C(v4, v6);
  v7 = (unsigned __int8)sub_8077ABC(v2, 2u);
  v8 = (unsigned __int8)sub_8077F68(v2);
  sub_8079E90(v2);
  *(_BYTE *)(v2 + 33704928) = CreateSprite(33705612, v7, v8);
  *(_WORD *)&gSprites[68 * *v5 + 48] = *(_BYTE *)(v2 + 33704928);
  *(_WORD *)&gSprites[68 * *(_BYTE *)(v2 + 33704928) + 46] = v2;
  *(_WORD *)&gSprites[68 * *(_BYTE *)(v2 + 33704928) + 50] = v4;
  v9 = &gSprites[68 * *(_BYTE *)(v2 + 33704928)];
  v9[5] = v9[5] & 0xF | 16 * v2;
  StartSpriteAnim((int)&gSprites[68 * *(_BYTE *)(v2 + 33704928)], *(_BYTE *)(v2 + 33705604));
  v10 = &gSprites[68 * *(_BYTE *)(v2 + 33704928) + 62];
  *v10 |= 4u;
  dword_2020020[17 * *(_BYTE *)(v2 + 33704928)] = (int)SpriteCallbackDummy;
  *(_WORD *)&gSprites[68 * *v5 + 46] = (unsigned __int8)sub_8046400(0, 0xFFu);
  return v12;
}
