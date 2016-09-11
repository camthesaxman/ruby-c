int sub_80FC484()
{
  int v0; // r8@1
  __int16 *v1; // r6@1
  int v2; // r6@3
  __int16 v3; // r0@3
  int v4; // r0@3
  char *v5; // r4@4
  __int16 v7[2]; // [sp+4h] [bp-28h]@3
  int v8; // [sp+6h] [bp-26h]@3
  char v9; // [sp+8h] [bp-24h]@3
  __int16 v10; // [sp+Ah] [bp-22h]@3
  int v11; // [sp+28h] [bp-4h]@6

  v0 = 0;
  v1 = &gUnknown_083E79D4;
  do
  {
    if ( FlagGet(v1[2 * v0]) << 24 )
    {
      v2 = (unsigned __int16)v1[2 * v0 + 1];
      sub_80FC04C(v2, v7, &v8, &v9, &v10);
      v7[0] = 8 * (v7[0] + 1);
      v3 = v8 + 2;
      LOWORD(v8) = 8 * (v8 + 2);
      v4 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83E7A38, v7[0], 8 * v3);
      if ( v4 != 64 )
      {
        v5 = &gSprites[68 * v4];
        v5[3] = v5[3] & 0x3F | 0x40;
        dword_2020020[17 * v4] = (int)sub_80FC55C;
        StartSpriteAnim((int)v5, 6);
        *((_WORD *)v5 + 23) = v2;
      }
    }
    v0 = (v0 + 1) & 0xFFFF;
    v1 = &gUnknown_083E79D4;
  }
  while ( word_83E79D6[2 * v0] != 88 );
  return v11;
}
