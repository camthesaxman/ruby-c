int sub_811DCA0()
{
  char v0; // r0@3
  int v2; // [sp+10h] [bp-4h]@0

  if ( !(*(_BYTE *)(12 * v2024A60 + 0x2017810) & 8) && !(*(_BYTE *)(12 * (v2024A60 ^ 2) + 0x2017810) & 8) )
  {
    v0 = *(_BYTE *)(12 * v2024A60 + 0x2017819) + 1;
    *(_BYTE *)(12 * v2024A60 + 0x2017819) = v0;
    if ( v0 != 1 )
    {
      *(_BYTE *)(12 * v2024A60 + 0x2017819) = 0;
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
      dword_3004330[v2024A60] = (int)sub_811DBC0;
    }
  }
  return v2;
}
