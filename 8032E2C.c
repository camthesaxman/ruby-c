int sub_8032E2C()
{
  int v0; // r2@3
  int v1; // r4@9
  unsigned __int16 v2; // r0@9
  unsigned __int8 v3; // r5@10
  unsigned __int16 v4; // r0@10
  int v6; // [sp+18h] [bp-4h]@0

  if ( !(*(_BYTE *)(12 * v2024A60 + 0x2017810) & 0x88) )
    sub_8141828(v2024A60, (char *)&unk_30045C0 + 100 * *(_WORD *)(2 * v2024A60 + 0x2024A6A));
  v0 = v2024A60 ^ 2;
  if ( !(*(_BYTE *)(12 * v0 + 0x2017810) & 0x88) )
    sub_8141828(v2024A60 ^ 2, (char *)&unk_30045C0 + 100 * *(_WORD *)(2 * v0 + 0x2024A6A));
  if ( !(*(_BYTE *)(12 * v2024A60 + 0x2017810) & 8) && !(*(_BYTE *)(12 * (v2024A60 ^ 2) + 0x2017810) & 8) )
  {
    if ( battle_type_is_double(0) << 24 && !(v20239F8 & 0x40) )
    {
      DestroySprite((int)&gSprites[68 * byte_300434C[v2024A60 ^ 2]]);
      sub_8045A5C(
        (unsigned __int8)byte_3004340[v2024A60 ^ 2],
        (char *)&unk_30045C0 + 100 * *(_WORD *)(2 * (v2024A60 ^ 2) + 0x2024A6A),
        0);
      sub_804777C(v2024A60 ^ 2);
      sub_8043DFC((unsigned __int8)byte_3004340[v2024A60 ^ 2]);
      v1 = v2024A60 ^ 2;
      v2 = GetMonData((char *)&unk_30045C0 + 100 * *(_WORD *)(2 * v1 + 0x2024A6A), 11);
      sub_8032984(v1, v2);
    }
    DestroySprite((int)&gSprites[68 * byte_300434C[v2024A60]]);
    sub_8045A5C(
      (unsigned __int8)byte_3004340[v2024A60],
      (char *)&unk_30045C0 + 100 * *(_WORD *)(2 * v2024A60 + 0x2024A6A),
      0);
    sub_804777C(v2024A60);
    sub_8043DFC((unsigned __int8)byte_3004340[v2024A60]);
    v3 = v2024A60;
    v4 = GetMonData((char *)&unk_30045C0 + 100 * *(_WORD *)(2 * v2024A60 + 0x2024A6A), 11);
    sub_8032984(v3, v4);
    v2017849 &= 0xFEu;
    dword_3004330[v2024A60] = (int)sub_8032C88;
  }
  return v6;
}
