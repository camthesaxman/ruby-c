int __fastcall sub_80A1A30(unsigned __int8 a1)
{
  int v1; // r4@1
  unsigned int v2; // r5@2
  char v3; // r0@3
  _BYTE *v4; // r2@3
  int v5; // r7@3
  int v7; // [sp+1Ch] [bp-4h]@0

  v1 = a1;
  if ( v201800B > 1u )
  {
    v2 = 0;
    do
    {
      v3 = CreateSprite((int)&gSpriteTemplate_83C1280, ((v2 << 20) + 5767168) >> 16, 40);
      v4 = (_BYTE *)(v1 + v2 + 33660928);
      *v4 = v3;
      v5 = v1 + v2;
      if ( v2 )
      {
        if ( v2 == 9 )
          StartSpriteAnim((int)&gSprites[68 * *(_BYTE *)(v1 + 33660937)], 5);
        else
          StartSpriteAnim((int)&gSprites[68 * *v4], 6);
      }
      else
      {
        StartSpriteAnim((int)&gSprites[68 * *(_BYTE *)(v1 + 33660928)], 4);
      }
      dword_2020020[17 * *(_BYTE *)(v5 + 33660928)] = (int)sub_80A1BC0;
      *(_WORD *)&gSprites[68 * *(_BYTE *)(v5 + 33660928) + 46] = v1;
      *(_WORD *)&gSprites[68 * *(_BYTE *)(v5 + 33660928) + 48] = 0;
      v2 = (v2 + 1) & 0xFF;
    }
    while ( v2 <= 9 );
  }
  return v7;
}
