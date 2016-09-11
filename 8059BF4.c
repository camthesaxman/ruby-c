int sub_8059BF4()
{
  int *v0; // r4@1
  unsigned __int8 v1; // r0@1
  int v3; // [sp+8h] [bp-4h]@0

  v0 = &dword_30048A0[9 * v202E85D];
  v1 = GetPlayerAvatarGraphicsIdByStateId(5u);
  sub_805B980(v0, v1);
  StartSpriteAnim((int)&gSprites[68 * v202E85C], 0);
  return v3;
}
