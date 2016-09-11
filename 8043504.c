int __fastcall sub_8043504(int a1)
{
  int v1; // r5@1
  char *v2; // r0@2
  char *v3; // r0@6
  __int16 v4; // r1@7
  int v6; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( !*(_WORD *)(a1 + 46) )
  {
    v2 = &gSprites[68 * *(_BYTE *)(dword_300481C + 1) + 62];
    *v2 &= 0xFBu;
    StartSpriteAffineAnim((int)&gSprites[68 * *(_BYTE *)(dword_300481C + 1)], 1);
  }
  if ( *(_WORD *)(v1 + 46) == 8 )
    BeginNormalPaletteFade(-1, -1, 16, 0);
  if ( (signed int)*(_WORD *)(v1 + 46) <= 9 )
  {
    v3 = &gSprites[68 * *(_BYTE *)(dword_300481C + 1)];
    --*((_WORD *)v3 + 17);
  }
  v4 = *(_WORD *)(v1 + 46);
  if ( (signed int)*(_WORD *)(v1 + 46) > 40 )
    *(_DWORD *)(v1 + 28) = SpriteCallbackDummy;
  *(_WORD *)(v1 + 46) = v4 + 1;
  return v6;
}
