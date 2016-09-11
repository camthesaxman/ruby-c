int sub_80C78A0()
{
  char *v0; // r4@1
  char v1; // r0@2
  char v2; // r0@3
  int v4; // [sp+8h] [bp-4h]@0

  v0 = &gSprites[68 * (unsigned __int8)AddPseudoFieldObject(0x8Cu, (int)SpriteCallbackDummy, 112, 80)];
  v0[62] &= 0xFDu;
  if ( (unsigned __int16)VarGet(16564) == 2 )
  {
    v1 = FieldObjectDirectionToImageAnimId(4u);
    StartSpriteAnim((int)v0, v1);
  }
  else
  {
    v2 = FieldObjectDirectionToImageAnimId(3u);
    StartSpriteAnim((int)v0, v2);
  }
  return v4;
}
