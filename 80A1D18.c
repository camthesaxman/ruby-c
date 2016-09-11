int sub_80A1D18()
{
  int v0; // r1@1
  int v1; // r2@1
  int v2; // r0@1
  int v3; // r5@2
  int v5; // [sp+0h] [bp-70h]@1
  int v6; // [sp+6Ch] [bp-4h]@6

  sub_809F678((int)&v5);
  v2 = (unsigned __int8)sub_80A1CD8((int)&v5, v0, v1);
  if ( v2 )
  {
    v3 = (v2 - 1) & 0xFF;
    if ( v201A01D == 255 )
      v201A01D = CreateSprite((int)&gSpriteTemplate_83C1304, 64, 152);
    StartSpriteAnim((int)&gSprites[68 * v201A01D], v3);
  }
  else
  {
    sub_80A18E4(0x1Du);
  }
  return v6;
}
