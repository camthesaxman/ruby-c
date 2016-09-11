int __fastcall oamc_804BEB4(int a1)
{
  int v1; // r3@1
  char *v2; // r1@1
  __int16 v3; // r0@1
  __int16 v4; // r0@1
  int v6; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = &gSprites[68 * (*(_WORD *)(a1 + 48) & 0xFF)];
  v3 = *(_WORD *)(a1 + 46);
  *((_WORD *)v2 + 19) = v3;
  *(_WORD *)(v1 + 46) = -v3;
  v4 = *(_WORD *)(v1 + 50) + 1;
  *(_WORD *)(v1 + 50) = v4;
  if ( v4 == 21 )
  {
    *((_WORD *)v2 + 18) = 0;
    *((_WORD *)v2 + 19) = 0;
    DestroySprite(v1);
  }
  return v6;
}
