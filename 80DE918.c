int __fastcall sub_80DE918(unsigned __int8 a1)
{
  int *v1; // r1@1
  unsigned int v2; // r4@3
  int v3; // r8@7
  int v4; // r10@8
  __int16 v5; // r9@8
  char *v6; // r4@8
  unsigned __int8 v7; // r0@2
  char *v8; // r4@12
  int *v10; // [sp+0h] [bp-34h]@1
  int v11; // [sp+4h] [bp-30h]@1
  __int16 v12; // [sp+8h] [bp-2Ch]@1
  unsigned int v13; // [sp+10h] [bp-24h]@4
  int v14; // [sp+30h] [bp-4h]@0

  v10 = &dword_3004B20[10 * a1];
  v4000050 = 16192;
  v4000052 = 4096;
  v1 = &dword_3004B20[10 * a1];
  *((_WORD *)v10 + 9) = 0;
  *((_WORD *)v1 + 10) = 0;
  *((_WORD *)v1 + 11) = 0;
  *((_WORD *)v1 + 12) = 0;
  *((_WORD *)v1 + 13) = 16;
  *((_WORD *)v1 + 14) = word_3004B00[0];
  v11 = (unsigned __int8)sub_8077ABC(v202F7C8, 2u);
  v12 = sub_807A100(v202F7C8, 3u);
  if ( sub_8076BE0() << 24 )
  {
    v7 = CreateSprite((int)&gSpriteTemplate_83DAF08, v11, v12);
    if ( v7 != 64 )
    {
      v8 = &gSprites[68 * v7];
      *((_WORD *)v8 + 23) = 16 * v11;
      *((_WORD *)v8 + 24) = 16 * v12;
      *((_WORD *)v8 + 25) = 16 * (48 - v11) / word_3004B02;
      *((_WORD *)v8 + 26) = 16 * (40 - v12) / word_3004B02;
      *((_WORD *)v8 + 27) = word_3004B02;
      *((_WORD *)v8 + 28) = 48;
      *((_WORD *)v8 + 29) = 40;
      dword_2020020[17 * v7] = (int)sub_80DE8D8;
      *((_WORD *)v10 + 17) = v7;
      *((_WORD *)v10 + 16) = 1;
    }
  }
  else
  {
    v2 = 0;
    do
    {
      v13 = v2 << 16;
      if ( (signed __int16)v2 != v202F7C8 && (signed __int16)v2 != (v202F7C8 ^ 2) )
      {
        if ( b_side_obj__get_some_boolean((unsigned __int8)v2) << 24 )
        {
          v3 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83DAF08, v11, v12);
          if ( v3 != 64 )
          {
            v4 = (unsigned __int8)sub_8077ABC(v2, 2u);
            v5 = sub_807A100(v2, 3u);
            v6 = &gSprites[68 * v3];
            *((_WORD *)v6 + 23) = 16 * v11;
            *((_WORD *)v6 + 24) = 16 * v12;
            *((_WORD *)v6 + 25) = 16 * (v4 - v11) / word_3004B02;
            *((_WORD *)v6 + 26) = 16 * (v5 - v12) / word_3004B02;
            *((_WORD *)v6 + 27) = word_3004B02;
            *((_WORD *)v6 + 28) = v4;
            *((_WORD *)v6 + 29) = v5;
            dword_2020020[17 * v3] = (int)sub_80DE8D8;
            *((_WORD *)v10 + (*((_WORD *)v10 + 16))++ + 13 + 4) = v3;
          }
        }
      }
      v2 = (v13 + 0x10000) >> 16;
    }
    while ( (signed int)(v13 + 0x10000) >> 16 <= 3 );
  }
  *v10 = (int)sub_80DEB38;
  return v14;
}
