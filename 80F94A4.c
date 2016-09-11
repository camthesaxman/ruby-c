int __fastcall sub_80F94A4(unsigned __int8 a1, _BYTE *a2, __int16 a3, __int16 a4)
{
  _BYTE *v4; // r5@1
  unsigned __int8 v5; // r4@1
  int v7; // [sp+8h] [bp-4h]@0

  v4 = a2;
  v5 = a1;
  if ( a1 <= 5u )
  {
    if ( *a2 == 255 )
      *a2 = CreateSprite((int)&gSpriteTemplate_83E5A00, a3, a4);
    StartSpriteAnim((int)&gSprites[68 * *v4], v5 - 4);
  }
  return v7;
}
