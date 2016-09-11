int __fastcall sub_80D4AD0(int a1)
{
  int v1; // r6@1
  __int16 v2; // r0@1
  int v3; // r0@2
  int v4; // r4@3
  char *v5; // r0@3
  int v7; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 12) + 1;
  *(_WORD *)(v1 + 12) = v2;
  if ( v2 > 1 )
  {
    *(_WORD *)(v1 + 12) = 0;
    v3 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83D9378, *(_WORD *)(v1 + 14), *(_WORD *)(v1 + 16));
    if ( v3 != 64 )
    {
      v4 = 17 * v3;
      v5 = &gSprites[68 * v3];
      *((_WORD *)v5 + 23) = 16;
      *((_WORD *)v5 + 25) = *(_WORD *)(v1 + 18);
      *((_WORD *)v5 + 27) = *(_WORD *)(v1 + 20);
      *((_WORD *)v5 + 28) = *(_WORD *)(v1 + 26);
      sub_80786EC((int)v5);
      dword_2020020[v4] = (int)sub_80D4B3C;
      ++*(_WORD *)(v1 + 24);
    }
  }
  return v7;
}
