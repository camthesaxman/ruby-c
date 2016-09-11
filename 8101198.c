int __fastcall sub_8101198(__int16 a1, __int16 a2)
{
  int v3; // [sp+Ch] [bp-4h]@0

  gSprites[68 * v20391A8 + 62] |= 4u;
  dword_2020020[17 * v20391A8] = (int)SpriteCallbackDummy;
  *(_WORD *)&gSprites[68 * v20391A9 + 32] = (16 * a1 & 0xFFF) + 136;
  *(_WORD *)&gSprites[68 * v20391A9 + 34] = (16 * a2 & 0xFFF) + 72;
  return v3;
}
