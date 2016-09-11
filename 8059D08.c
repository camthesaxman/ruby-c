int __fastcall sub_8059D08(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r4@1
  unsigned __int8 v3; // r0@1
  char *v4; // r4@1
  char v5; // r0@1
  int v7; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_30048A0[9 * v202E85D];
  v3 = GetPlayerAvatarGraphicsIdByStateId(7u);
  sub_805B980(v2, v3);
  v4 = &gSprites[68 * v202E85C];
  v5 = FieldObjectDirectionToImageAnimId(v1);
  StartSpriteAnim((int)v4, v5);
  return v7;
}
