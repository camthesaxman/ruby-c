int __fastcall sub_807A4A0(int a1, unsigned __int8 a2)
{
  int v2; // r6@1
  unsigned __int8 v3; // r0@1
  int v4; // r8@1
  char *v5; // r5@1
  int v6; // ST00_4@1

  v2 = a2;
  v3 = object_new_hidden_with_callback((int)SpriteCallbackDummy);
  v4 = v3;
  v5 = &gSprites[68 * v3];
  v6 = 17 * v3;
  memcpy(v5, &gSprites[68 * v2], 68);
  v5[63] |= 0x40u;
  v5[5] &= 0xF3u;
  v5[1] = v5[1] & 0xF3 | 8;
  *((_WORD *)v5 + 2) = *((_WORD *)v5 + 2) & 0xFC00 | *(_WORD *)&gSprites[68 * v2 + 4] & 0x3FF;
  dword_2020020[v6] = (int)SpriteCallbackDummy;
  return v4;
}
