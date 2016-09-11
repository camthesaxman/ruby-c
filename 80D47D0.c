int __fastcall sub_80D47D0(int a1)
{
  int v1; // r5@1
  __int16 v2; // r0@2
  int v3; // r0@3
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( !*(_WORD *)(a1 + 46) )
  {
    v2 = *(_WORD *)(a1 + 34) + 8;
    *(_WORD *)(v1 + 34) = v2;
    if ( v2 >= (signed int)*(_WORD *)(v1 + 56) )
    {
      LOWORD(dword_3004B20[10 * *(_WORD *)(v1 + 58) + 7]) = 1;
      v3 = (unsigned __int8)CreateSprite(
                              (int)&gBattleAnimSpriteTemplate_83DB4D8,
                              *(_WORD *)(v1 + 32),
                              *(_WORD *)(v1 + 34));
      *(_WORD *)(v1 + 48) = v3;
      if ( v3 != 64 )
      {
        StartSpriteAffineAnim((int)&gSprites[68 * *(_WORD *)(v1 + 48)], 3);
        *(_WORD *)&gSprites[68 * *(_WORD *)(v1 + 48) + 58] = *(_WORD *)(v1 + 58);
        *(_WORD *)&gSprites[68 * *(_WORD *)(v1 + 48) + 60] = *(_WORD *)(v1 + 60);
        dword_2020020[17 * *(_WORD *)(v1 + 48)] = (int)sub_80D487C;
      }
      DestroySprite(v1);
    }
  }
  return v5;
}
