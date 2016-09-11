int __fastcall unref_sub_8043E70(unsigned __int8 a1)
{
  char *v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = &gSprites[68 * a1];
  DestroySprite((int)&gSprites[68 * *((_WORD *)v1 + 3)]);
  DestroySprite((int)&gSprites[68 * *((_WORD *)v1 + 28)]);
  DestroySprite((int)v1);
  return v3;
}
