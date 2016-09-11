int __fastcall sub_807B184(unsigned __int8 a1)
{
  int v1; // r7@1
  unsigned __int8 v2; // r0@3
  __int16 v3; // r8@5
  int v4; // r2@5
  int v5; // r2@6
  __int16 v6; // r4@7
  unsigned __int8 v7; // r0@7
  __int16 v8; // r4@7
  char *v9; // r1@7
  int v10; // r2@7
  unsigned __int16 v11; // r4@10
  unsigned __int8 v12; // r0@10
  int v13; // r4@10
  unsigned __int8 v14; // r0@13
  char v15; // r0@13
  int v16; // r2@15
  __int16 v17; // r4@16
  unsigned __int8 v18; // r0@16
  __int16 v19; // r4@16
  char *v20; // r1@16
  int v21; // r2@16
  char *v22; // r2@17
  int v24; // [sp+20h] [bp-4h]@0

  v1 = a1;
  if ( a1 >= (unsigned int)v2024A68 )
    return v24;
  if ( *(_BYTE *)(4 * a1 + 0x2017800) & 4 )
    v2 = sub_8077F7C(a1);
  else
    v2 = sub_8077F68(a1);
  v3 = v2;
  if ( !(battle_side_get_owner(v1) << 24) )
  {
    if ( !(v20239F8 & 0x80) || v1 )
    {
      if ( !(v20239F8 & 0x200) || v1 )
      {
        if ( GetMonData((int)&dword_3004360[25 * *(_WORD *)(2 * v1 + 0x2024A6A)], 57, 33700344) )
        {
          v17 = GetMonData((int)&dword_3004360[25 * *(_WORD *)(2 * v1 + 0x2024A6A)], 11, v16);
          v18 = battle_get_per_side_status(v1);
          GetMonSpriteTemplate_803C56C(v17, v18);
          v19 = (unsigned __int8)sub_8077ABC(v1, 2u);
          sub_8079E90(v1);
          *(_BYTE *)(v1 + 33704928) = CreateSprite(33705612, v19, v3);
          v20 = &gSprites[68 * *(_BYTE *)(v1 + 33704928)];
          v21 = (unsigned __int8)v20[5];
          v20[5] = v21 & 0xF | 16 * v1;
          dword_2020020[17 * *(_BYTE *)(v1 + 33704928)] = (int)SpriteCallbackDummy;
          *(_WORD *)&gSprites[68 * *(_BYTE *)(v1 + 33704928) + 46] = v1;
          *(_WORD *)&gSprites[68 * *(_BYTE *)(v1 + 33704928) + 50] = GetMonData(
                                                                       (int)&dword_3004360[25
                                                                                         * *(_WORD *)(2 * v1 + 0x2024A6A)],
                                                                       11,
                                                                       v21);
          StartSpriteAnim((int)&gSprites[68 * *(_BYTE *)(v1 + 33704928)], *(_BYTE *)(v1 + 33705604));
          goto _0807B4AC;
        }
        return v24;
      }
      v14 = battle_get_per_side_status(0);
      GetMonSpriteTemplate_803C5A0(2u, v14);
      LOWORD(v13) = 80;
      v15 = sub_8079E90(0);
    }
    else
    {
      v11 = v2024EAC;
      v12 = battle_get_per_side_status(0);
      GetMonSpriteTemplate_803C5A0(v11, v12);
      v13 = (((8 - gTrainerBackPicCoords[4 * v2024EAC]) << 18) + 5242880) >> 16;
      sub_8079E90(0);
    }
    v2024BE0 = CreateSprite(33705612, 80, v13);
    gSprites[68 * v2024BE0 + 5] &= 0xFu;
    dword_2020020[17 * v2024BE0] = (int)SpriteCallbackDummy;
    *(_WORD *)&gSprites[68 * v2024BE0 + 46] = v1;
    goto _0807B4AC;
  }
  if ( GetMonData((int)&unk_30045C0 + 100 * *(_WORD *)(2 * v1 + 0x2024A6A), 57, v4) )
  {
    v6 = GetMonData((int)&unk_30045C0 + 100 * *(_WORD *)(2 * v1 + 0x2024A6A), 11, v5);
    v7 = battle_get_per_side_status(v1);
    GetMonSpriteTemplate_803C56C(v6, v7);
    v8 = (unsigned __int8)sub_8077ABC(v1, 2u);
    sub_8079E90(v1);
    *(_BYTE *)(v1 + 33704928) = CreateSprite(33705612, v8, v3);
    v9 = &gSprites[68 * *(_BYTE *)(v1 + 33704928)];
    v10 = (unsigned __int8)v9[5];
    v9[5] = v10 & 0xF | 16 * v1;
    dword_2020020[17 * *(_BYTE *)(v1 + 33704928)] = (int)SpriteCallbackDummy;
    *(_WORD *)&gSprites[68 * *(_BYTE *)(v1 + 33704928) + 46] = v1;
    *(_WORD *)&gSprites[68 * *(_BYTE *)(v1 + 33704928) + 50] = GetMonData(
                                                                 (int)&unk_30045C0
                                                               + 100 * *(_WORD *)(2 * v1 + 0x2024A6A),
                                                                 11,
                                                                 v10);
    StartSpriteAnim((int)&gSprites[68 * *(_BYTE *)(v1 + 33704928)], *(_BYTE *)(v1 + 33705604));
_0807B4AC:
    v22 = &gSprites[68 * *(_BYTE *)(v1 + 33704928) + 62];
    *v22 = *v22 & 0xFB | 4 * (*(_BYTE *)(4 * v1 + 0x2017800) & 1);
  }
  return v24;
}
