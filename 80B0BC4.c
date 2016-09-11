int __fastcall sub_80B0BC4(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r4@1
  int v3; // r9@1
  char *v4; // r0@1
  int v5; // r2@1
  int v6; // r5@1
  int v8; // [sp+14h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  sub_80B0B98();
  v4 = &gSprites[68 * v2];
  v5 = 4 * *((_WORD *)v4 + 24) + 33657656;
  *(_BYTE *)(v5 + 2) |= 2u;
  v6 = *((_WORD *)v4 + 23) & 0xFF;
  StartSpriteAffineAnim((int)v4, 1);
  StartSpriteAffineAnim((int)&gSprites[68 * v6], 1);
  dword_2020020[17 * v2] = (int)sub_80B0C5C;
  dword_2020020[17 * v6] = (int)SpriteCallbackDummy;
  if ( v3 )
    audio_play(2u);
  else
    audio_play(0x65u);
  return v8;
}
