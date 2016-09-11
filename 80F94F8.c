int __fastcall sub_80F94F8(_BYTE *a1)
{
  _BYTE *v1; // r4@1
  int v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *a1;
  if ( v2 != 255 )
  {
    DestroySprite((int)&gSprites[68 * v2]);
    *v1 = -1;
  }
  return v4;
}
