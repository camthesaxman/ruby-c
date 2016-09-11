int sub_802D798()
{
  int v0; // r3@3
  int v2; // [sp+Ch] [bp-4h]@0

  if ( !(*(_BYTE *)(12 * v2024A60 + 0x2017810) & 0x88) )
    sub_8141828(v2024A60, (char *)&unk_3004360 + 100 * *(_WORD *)(2 * v2024A60 + 0x2024A6A));
  v0 = 17 * byte_300434C[v2024A60];
  if ( (void (*)())dword_2020020[v0] == SpriteCallbackDummy && !(*(_BYTE *)(12 * v2024A60 + 0x2017810) & 8) )
  {
    DestroySprite((int)&gSprites[v0 * 4]);
    sub_8045A5C(
      (unsigned __int8)byte_3004340[v2024A60],
      (char *)&unk_3004360 + 100 * *(_WORD *)(2 * v2024A60 + 0x2024A6A),
      0);
    sub_804777C(v2024A60);
    sub_8043DFC((unsigned __int8)byte_3004340[v2024A60]);
    sub_8031F88(v2024A60);
    dword_3004330[v2024A60] = (int)sub_802D680;
  }
  return v2;
}
