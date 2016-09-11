int sub_80AFE30()
{
  signed int v0; // r4@1
  int v2; // [sp+8h] [bp-4h]@0

  LoadSpriteSheet((int)"\\—Ñ\b ");
  v0 = 0;
  do
  {
    *(_BYTE *)(4 * v0 + 0x2019338) = CreateSprite(
                                       (int)&gSpriteTemplate_83CA3AC,
                                       180,
                                       gUnknown_083CA338[*(_BYTE *)(v0 + 33785494)]);
    ++v0;
  }
  while ( v0 <= 3 );
  return v2;
}
