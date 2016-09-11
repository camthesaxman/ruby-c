int __fastcall sub_80A7D8C(unsigned __int8 a1, __int16 a2, __int16 a3)
{
  __int16 v3; // r4@1
  __int16 v4; // r5@1

  v3 = a2;
  v4 = a3;
  sub_80A7CF8(a1);
  return (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83C1D74, v3, v4);
}
