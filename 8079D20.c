int __fastcall unref_sub_8079D20(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r4@1
  unsigned int v3; // r7@1
  char *v4; // r1@2
  char *v5; // r1@4
  char *v6; // r1@6
  char *v7; // r1@8
  int v9; // [sp+14h] [bp-4h]@0

  v1 = a1 << 24;
  v2 = v1 >> 24;
  v3 = v1 >> 24;
  if ( b_side_obj__get_some_boolean(v202F7C9) << 24 )
  {
    v4 = &gSprites[68 * *(_BYTE *)(v202F7C9 + 0x2024BE0)];
    v4[5] = v4[5] & 0xF3 | 4 * (v2 & 3);
  }
  if ( b_side_obj__get_some_boolean(v202F7C8) << 24 )
  {
    v5 = &gSprites[68 * *(_BYTE *)(v202F7C8 + 0x2024BE0)];
    v5[5] = v5[5] & 0xF3 | 4 * (v2 & 3);
  }
  if ( b_side_obj__get_some_boolean(v202F7C9 ^ 2) << 24 )
  {
    v6 = &gSprites[68 * *(_BYTE *)((v202F7C9 ^ 2) + 0x2024BE0)];
    v6[5] = v6[5] & 0xF3 | 4 * (v2 & 3);
  }
  if ( b_side_obj__get_some_boolean(v202F7C8 ^ 2) << 24 )
  {
    v7 = &gSprites[68 * *(_BYTE *)((v202F7C8 ^ 2) + 0x2024BE0)];
    v7[5] = v7[5] & 0xF3 | 4 * (v3 & 3);
  }
  return v9;
}
