int sub_80333D4()
{
  int v0; // r3@3
  unsigned __int8 v1; // r4@5
  unsigned __int16 v2; // r0@5
  int v4; // [sp+Ch] [bp-4h]@0

  if ( !(*(_BYTE *)(12 * v2024A60 + 0x2017810) & 0x88) )
    sub_8141828(v2024A60, (char *)&unk_30045C0 + 100 * *(_WORD *)(2 * v2024A60 + 0x2024A6A));
  v0 = 17 * byte_300434C[v2024A60];
  if ( (void (*)())dword_2020020[v0] == SpriteCallbackDummy && !(*(_BYTE *)(12 * v2024A60 + 0x2017810) & 8) )
  {
    DestroySprite((int)&gSprites[v0 * 4]);
    v1 = v2024A60;
    v2 = GetMonData((char *)&unk_30045C0 + 100 * *(_WORD *)(2 * v2024A60 + 0x2024A6A), 11);
    sub_8032984(v1, v2);
    dword_3004330[v2024A60] = (int)sub_8033308;
  }
  return v4;
}
