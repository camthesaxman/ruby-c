int sub_8137538()
{
  int v0; // r2@3
  int v2; // [sp+10h] [bp-4h]@0

  if ( !(*(_BYTE *)(12 * v2024A60 + 0x2017810) & 0x88) )
    sub_8141828(v2024A60, &dword_3004360[25 * *(_WORD *)(2 * v2024A60 + 0x2024A6A)]);
  v0 = v2024A60 ^ 2;
  if ( !(*(_BYTE *)(12 * v0 + 0x2017810) & 0x88) )
    sub_8141828(v2024A60 ^ 2, &dword_3004360[25 * *(_WORD *)(2 * v0 + 0x2024A6A)]);
  if ( !(*(_BYTE *)(12 * v2024A60 + 0x2017810) & 8) && !(*(_BYTE *)(12 * (v2024A60 ^ 2) + 0x2017810) & 8) )
  {
    if ( battle_type_is_double() << 24 && !(v20239F8 & 0x40) )
    {
      DestroySprite((int)&gSprites[68 * byte_300434C[v2024A60 ^ 2]]);
      sub_8045A5C(
        (unsigned __int8)byte_3004340[v2024A60 ^ 2],
        (int)&dword_3004360[25 * *(_WORD *)(2 * (v2024A60 ^ 2) + 0x2024A6A)],
        0);
      sub_804777C(v2024A60 ^ 2);
      sub_8043DFC(byte_3004340[v2024A60 ^ 2]);
    }
    DestroySprite((int)&gSprites[68 * byte_300434C[v2024A60]]);
    sub_8045A5C(
      (unsigned __int8)byte_3004340[v2024A60],
      (int)&dword_3004360[25 * *(_WORD *)(2 * v2024A60 + 0x2024A6A)],
      0);
    sub_804777C(v2024A60);
    sub_8043DFC(byte_3004340[v2024A60]);
    v2017849 &= 0xFEu;
    dword_3004330[v2024A60] = (int)sub_81376B8;
  }
  return v2;
}
