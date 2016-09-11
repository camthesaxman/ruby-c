int __fastcall sub_8086870(int a1)
{
  int v1; // r5@1
  __int16 v2; // r4@1

  v1 = a1;
  v2 = gSprites[68 * v202E85C + 41];
  *(_WORD *)&gSprites[68 * v202E85C + 38] = -(signed __int16)(-2 * v2
                                                            + *(_WORD *)&gSprites[68 * v202E85C + 34]
                                                            + v2
                                                            + gSpriteCoordOffsetY);
  *(_WORD *)(a1 + 10) = 1;
  *(_WORD *)(a1 + 12) = 0;
  BYTE1(dword_30048A0[9 * v202E85D]) &= 0xDFu;
  audio_play(0x2Bu);
  ++*(_WORD *)(v1 + 8);
  return 0;
}
