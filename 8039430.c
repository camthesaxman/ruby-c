int __fastcall sub_8039430(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r6@1
  int v3; // r8@1
  _BYTE *v4; // r10@1
  unsigned __int8 v5; // r0@1
  __int16 v6; // r5@1
  __int16 v7; // r4@1
  char *v8; // r1@1
  char *v9; // r0@1
  int v11; // [sp+18h] [bp-4h]@0

  v2 = a1;
  sub_8032AA8(a1, a2);
  *(_WORD *)(2 * v2 + 0x2024A6A) = *(_BYTE *)((v2 << 9) + 0x2023A61);
  v3 = (unsigned __int16)GetMonData((char *)&unk_30045C0 + 100 * *(_WORD *)(2 * v2 + 0x2024A6A), 11);
  v4 = &byte_300434C[v2];
  byte_300434C[v2] = object_new_hidden_with_callback(sub_80312F0);
  sub_8031794((int)&unk_30045C0 + 100 * *(_WORD *)(2 * v2 + 0x2024A6A), v2);
  v5 = battle_get_per_side_status(v2);
  GetMonSpriteTemplate_803C56C(v3, v5);
  v6 = (unsigned __int8)sub_8077ABC(v2, 2);
  v7 = (unsigned __int8)sub_8077F68(v2);
  sub_8079E90(v2);
  *(_BYTE *)(v2 + 33704928) = CreateSprite(33705612, v6, v7);
  *(_WORD *)&gSprites[68 * *v4 + 48] = *(_BYTE *)(v2 + 33704928);
  *(_WORD *)&gSprites[68 * *(_BYTE *)(v2 + 33704928) + 46] = v2;
  *(_WORD *)&gSprites[68 * *(_BYTE *)(v2 + 33704928) + 50] = v3;
  v8 = &gSprites[68 * *(_BYTE *)(v2 + 33704928)];
  v8[5] = v8[5] & 0xF | 16 * v2;
  StartSpriteAnim((int)&gSprites[68 * *(_BYTE *)(v2 + 33704928)], *(_BYTE *)(v2 + 33705604));
  v9 = &gSprites[68 * *(_BYTE *)(v2 + 33704928) + 62];
  *v9 |= 4u;
  dword_2020020[17 * *(_BYTE *)(v2 + 33704928)] = (int)SpriteCallbackDummy;
  *(_WORD *)&gSprites[68 * *v4 + 46] = (unsigned __int8)sub_8046400(0, 254);
  return v11;
}
