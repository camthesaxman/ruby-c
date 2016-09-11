int __fastcall sub_80D472C(int a1, unsigned __int8 a2)
{
  int v2; // r4@1
  __int16 v3; // r6@1
  int v4; // r5@1
  int v5; // r1@1
  char *v6; // r0@2
  int v8; // [sp+Ch] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = (((gSineTable[*(_WORD *)(a1 + 24)] + 3) >> 4) + *(_WORD *)(a1 + 20)) & 0xFFFF;
  v5 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83D9378, *(_WORD *)(a1 + 22), 0);
  if ( v5 != 64 )
  {
    dword_2020020[17 * v5] = (int)sub_80D47D0;
    v6 = &gSprites[68 * v5];
    *((_WORD *)v6 + 28) = v4;
    *((_WORD *)v6 + 29) = v3;
    *((_WORD *)v6 + 30) = 9;
    ++*(_WORD *)(v2 + 26);
  }
  ++*(_WORD *)(v2 + 30);
  *(_WORD *)(v2 + 24) = (*(_WORD *)(v2 + 24) + 39) & 0xFF;
  *(_WORD *)(v2 + 22) = *(_WORD *)(v2 + 16) + (1103515245 * *(_WORD *)(v2 + 22) + 12345) % *(_WORD *)(v2 + 18);
  return v8;
}
