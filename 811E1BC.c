int sub_811E1BC()
{
  int v0; // r3@3
  int v2; // [sp+Ch] [bp-4h]@0

  if ( !(*(_BYTE *)(12 * v2024A60 + 0x2017810) & 0x88) )
    sub_8141828(v2024A60, &dword_3004360[25 * *(_WORD *)(2 * v2024A60 + 0x2024A6A)]);
  v0 = 17 * byte_300434C[v2024A60];
  if ( (void (*)())dword_2020020[v0] == SpriteCallbackDummy && !(*(_BYTE *)(12 * v2024A60 + 0x2017810) & 8) )
  {
    DestroySprite((int)&gSprites[v0 * 4]);
    dword_3004330[v2024A60] = (int)sub_811E0CC;
  }
  return v2;
}
