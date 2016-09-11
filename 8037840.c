int sub_8037840()
{
  int v0; // r2@3
  int v1; // r0@7
  char v2; // r0@9
  int v3; // r4@13
  unsigned __int16 v4; // r0@13
  unsigned __int8 v5; // r5@14
  unsigned __int16 v6; // r0@14
  int v8; // [sp+1Ch] [bp-4h]@0

  if ( !(*(_BYTE *)(12 * v2024A60 + 0x2017810) & 0x88) )
    sub_8141828(v2024A60, (char *)&unk_30045C0 + 100 * *(_WORD *)(2 * v2024A60 + 0x2024A6A));
  v0 = v2024A60 ^ 2;
  if ( !(*(_BYTE *)(12 * v0 + 0x2017810) & 0x88) )
    sub_8141828(v2024A60 ^ 2, (char *)&unk_30045C0 + 100 * *(_WORD *)(2 * v0 + 0x2024A6A));
  if ( !(*(_BYTE *)(12 * v2024A60 + 0x2017810) & 8) && !(*(_BYTE *)(12 * (v2024A60 ^ 2) + 0x2017810) & 8) )
  {
    v1 = v20239F8 & 0x40;
    if ( v20239F8 & 0x40 )
    {
      v1 = (unsigned __int8)battle_get_per_side_status(v2024A60);
      if ( v1 == 3 )
      {
        v2 = *(_BYTE *)(12 * v2024A60 + 0x2017819) + 1;
        *(_BYTE *)(12 * v2024A60 + 0x2017819) = v2;
        if ( v2 == 1 )
          return v8;
        v1 = 12 * v2024A60 + 33650704;
        *(_BYTE *)(12 * v2024A60 + 0x2017819) = 0;
      }
    }
    if ( battle_type_is_double(v1) << 24 && !(v20239F8 & 0x40) )
    {
      DestroySprite((int)&gSprites[68 * byte_300434C[v2024A60 ^ 2]]);
      sub_8045A5C(
        (unsigned __int8)byte_3004340[v2024A60 ^ 2],
        (char *)&unk_30045C0 + 100 * *(_WORD *)(2 * (v2024A60 ^ 2) + 0x2024A6A),
        0);
      sub_804777C(v2024A60 ^ 2);
      sub_8043DFC((unsigned __int8)byte_3004340[v2024A60 ^ 2]);
      v3 = v2024A60 ^ 2;
      v4 = GetMonData((char *)&unk_30045C0 + 100 * *(_WORD *)(2 * v3 + 0x2024A6A), 11);
      sub_8032984(v3, v4);
    }
    DestroySprite((int)&gSprites[68 * byte_300434C[v2024A60]]);
    sub_8045A5C(
      (unsigned __int8)byte_3004340[v2024A60],
      (char *)&unk_30045C0 + 100 * *(_WORD *)(2 * v2024A60 + 0x2024A6A),
      0);
    sub_804777C(v2024A60);
    sub_8043DFC((unsigned __int8)byte_3004340[v2024A60]);
    v5 = v2024A60;
    v6 = GetMonData((char *)&unk_30045C0 + 100 * *(_WORD *)(2 * v2024A60 + 0x2024A6A), 11);
    sub_8032984(v5, v6);
    v2017849 &= 0xFEu;
    dword_3004330[v2024A60] = (int)sub_8037680;
  }
  return v8;
}
