int __fastcall sub_8049560(unsigned __int8 *a1, unsigned __int8 a2)
{
  unsigned __int8 *v2; // r7@1
  int v3; // r6@1
  _BYTE *v4; // r2@2
  _BYTE *v5; // r4@3
  int v7; // [sp+10h] [bp-4h]@0

  v2 = a1;
  v3 = (unsigned __int8)sub_8049514(*a1, a2);
  if ( v3 == 12 )
  {
    StartSpriteAnim((int)&gSprites[68 * *(_BYTE *)(dword_3004824 + 64)], 1);
    v4 = (_BYTE *)(dword_3004824 + 64);
    *(_WORD *)&gSprites[68 * *v4 + 32] = 224;
    *(_WORD *)&gSprites[68 * *v4 + 34] = 160;
  }
  else
  {
    StartSpriteAnim((int)&gSprites[68 * *(_BYTE *)(dword_3004824 + 64)], 0);
    v5 = (_BYTE *)(dword_3004824 + 64);
    *(_WORD *)&gSprites[68 * *v5 + 32] = 8 * (unsigned __int8)gTradeMonSpriteCoords[2 * v3] + 32;
    *(_WORD *)&gSprites[68 * *v5 + 34] = 8 * (unsigned __int8)byte_820C29D[2 * v3];
  }
  if ( *v2 != v3 )
    audio_play(5);
  *v2 = v3;
  return v7;
}
