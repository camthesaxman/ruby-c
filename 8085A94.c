int __fastcall AddNewGameBirchObject(__int16 a1, __int16 a2)
{
  __int16 v2; // r4@1
  __int16 v3; // r5@1

  v2 = a1;
  v3 = a2;
  LoadSpritePalette((int)&gUnknown_0839F114);
  return (unsigned __int8)CreateSprite((int)&gSpriteTemplate_839F128, v2, v3);
}
