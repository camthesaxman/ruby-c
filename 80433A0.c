int __fastcall sub_80433A0(int a1, int a2, int a3)
{
  int v3; // r4@1
  __int16 v4; // r0@1
  __int16 v5; // r0@2
  int v6; // r0@3
  int v7; // r3@3
  _BYTE *v8; // r0@5
  int v9; // r0@5
  int v11; // [sp+Ch] [bp-4h]@0

  v3 = a1;
  v4 = *(_WORD *)(a1 + 50) + 1;
  *(_WORD *)(v3 + 50) = v4;
  if ( v4 > 30 )
  {
    v5 = *(_WORD *)(v3 + 46) + 1;
    *(_WORD *)(v3 + 46) = v5;
    if ( v5 <= 38 )
    {
      *(_WORD *)(v3 + 48) = (*(_WORD *)(v3 + 48) + 20) & 0xFF;
      *(_WORD *)(v3 + 36) = sine(*(_WORD *)(v3 + 48), 2);
      if ( *(_WORD *)(v3 + 46) == 15 )
      {
        audio_play(23);
        v8 = StartSpriteAnim(v3, 2);
        v9 = sub_80435FC(v8);
        sub_80435FC(v9);
      }
      if ( *(_WORD *)(v3 + 46) == 30 )
        audio_play(23);
    }
    else
    {
      *(_DWORD *)(v3 + 28) = sub_8043460;
      *(_WORD *)(v3 + 46) = 0;
      v6 = GetMonData((int)&dword_3004360[25 * *(_BYTE *)(dword_300481C + 4)], 11, a3);
      v7 = dword_300481C;
      *(_WORD *)&gSprites[68 * *(_BYTE *)(dword_300481C + 1) + 36] = 0;
      *(_WORD *)&gSprites[68 * *(_BYTE *)(v7 + 1) + 38] = gMonFrontPicCoords[(4 * v6 & 0x3FFFF) + 1];
    }
  }
  return v11;
}
