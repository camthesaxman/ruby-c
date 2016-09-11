int __fastcall sub_80CC358(int a1, unsigned __int8 a2)
{
  int v2; // r6@1
  int v3; // r7@1
  int v4; // r0@1
  char *v5; // r0@2
  int v6; // r3@2
  int v7; // r0@2
  int v8; // r5@3
  char *v9; // r4@3
  int *v10; // r1@3
  int v12; // [sp+14h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = *(_WORD *)(a1 + 36) + 1;
  *(_WORD *)(v2 + 36) = v4;
  if ( v4 << 16 > 0 )
  {
    *(_WORD *)(v2 + 36) = 0;
    v5 = &gSprites[68 * *(_WORD *)(v2 + 12)];
    v6 = *(_BYTE *)(v2 + 16);
    v7 = (unsigned __int8)CreateSprite(
                            (int)"O'O',ß7\bhh=\b",
                            *((_WORD *)v5 + 18) + *((_WORD *)v5 + 16),
                            *((_WORD *)v5 + 19) + *((_WORD *)v5 + 17));
    if ( v7 != 64 )
    {
      v8 = 17 * v7;
      v9 = &gSprites[68 * v7];
      *((_WORD *)v9 + 29) = v3;
      *((_WORD *)v9 + 30) = 12;
      v10 = &dword_3004B20[10 * v3];
      ++*((_WORD *)v10 + 16);
      *((_WORD *)v9 + 23) = *(_WORD *)(v2 + 34) & 1;
      ++*((_WORD *)v10 + 17);
      StartSpriteAnim((int)v9, *(_BYTE *)(v2 + 14));
      v9[67] = *(_WORD *)(v2 + 16);
      dword_2020020[v8] = (int)sub_80CC408;
    }
  }
  return v12;
}
