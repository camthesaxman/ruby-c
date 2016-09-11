_BOOL4 __fastcall sub_80D7194(int a1, unsigned __int8 a2)
{
  int v2; // r4@1
  __int16 v3; // r5@1
  unsigned __int8 v4; // r0@1
  char *v5; // r0@2
  int v6; // r1@3
  int v7; // r5@3
  int v8; // r2@7

  v2 = a1;
  v3 = a2;
  v4 = CreateSprite((int)&gSpriteTemplate_83D9B10, *(_WORD *)(v2 + 14), *(_WORD *)(v2 + 18));
  if ( v4 != 64 )
  {
    v5 = &gSprites[68 * v4];
    *((_WORD *)v5 + 29) = v3;
    *((_WORD *)v5 + 30) = 7;
    ++*(_WORD *)(v2 + 22);
  }
  v6 = *(_WORD *)(v2 + 10);
  v7 = *(_WORD *)(v2 + 20);
  *(_WORD *)(v2 + 20) = v6 + v7;
  if ( (v6 + v7) & 0x8000 )
    *(_WORD *)(v2 + 20) = 3;
  if ( (signed int)*(_WORD *)(v2 + 20) > 3 )
    *(_WORD *)(v2 + 20) = 0;
  v8 = 16 * *(_WORD *)(v2 + 10) + *(_WORD *)(v2 + 14);
  *(_WORD *)(v2 + 14) = v8;
  return (signed __int16)v6 == 1 && (signed __int16)v8 >= (signed int)*(_WORD *)(v2 + 16)
      || (signed __int16)v6 == -1 && (signed __int16)v8 <= (signed int)*(_WORD *)(v2 + 16);
}
