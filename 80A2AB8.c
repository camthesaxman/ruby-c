int sub_80A2AB8()
{
  unsigned int v0; // r4@1
  int v2; // [sp+Ch] [bp-4h]@0

  v0 = 1;
  do
  {
    DestroySprite((int)&gSprites[68 * *(_BYTE *)(v0 + 33685488)]);
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 7 );
  FieldEffectStop((int)&gSprites[68 * v201FFF0], 0x3Au);
  sub_8064E2C();
  script_env_2_disable();
  return v2;
}
