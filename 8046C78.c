int __fastcall sub_8046C78(int a1)
{
  int v1; // r6@1
  int v2; // r5@1
  unsigned __int16 v3; // r0@1
  int v4; // r4@1
  int v5; // r2@2
  char *v6; // r0@3
  char v7; // r8@3
  __int16 v8; // r7@5
  int v9; // r0@5
  signed __int16 v10; // r4@15
  int *v11; // r1@20
  int v13; // [sp+18h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 58) & 0xFF;
  StartSpriteAnim(a1, 1);
  v3 = sub_8047978(v2);
  v4 = (unsigned __int8)ball_number_to_ball_processing_index(v3);
  sub_814086C(*(_WORD *)(v1 + 32) & 0xFF, (*(_WORD *)(v1 + 34) - 5) & 0xFF, 1, 28);
  *(_WORD *)(v1 + 46) = (unsigned __int8)sub_8141314(1, *(_WORD *)(v1 + 58) & 0xFF, 14, v4);
  *(_DWORD *)(v1 + 28) = sub_8046E9C;
  if ( byte_3001BAD & 2 )
  {
    if ( battle_side_get_owner(v2) << 24 )
    {
      v6 = (char *)&unk_30045C0 + 100 * *(_WORD *)(2 * v2 + 0x2024A6A);
      v7 = 25;
    }
    else
    {
      v6 = (char *)&dword_3004360[25 * *(_WORD *)(2 * v2 + 0x2024A6A)];
      v7 = -25;
    }
    v8 = GetMonData((int)v6, 11, v5);
    v9 = (unsigned __int8)battle_get_side_with_given_state(0);
    if ( v2 == v9 || (v9 = (unsigned __int8)battle_get_side_with_given_state(1), v2 == v9) )
    {
      v9 = battle_type_is_double(v9) << 24;
      if ( v9 )
      {
        v9 = v2017849 & 1;
        if ( v2017849 & 1 )
        {
          if ( v20239F8 & 0x40 )
          {
            v9 = sub_80755D4(v20239F8 & 0x40) << 24;
            if ( v9 )
              v9 = m4aMPlayStop(&unk_3007380);
          }
          else
          {
            v9 = m4aMPlayVolumeControl(&unk_3007380, 0xFFFF, 128);
          }
        }
      }
    }
    if ( battle_type_is_double(v9) << 24 && v2017849 & 1 )
    {
      if ( v2 != (unsigned __int8)battle_get_side_with_given_state(0)
        && v2 != (unsigned __int8)battle_get_side_with_given_state(1) )
      {
        v10 = 2;
      }
      else
      {
        v10 = 1;
      }
    }
    else
    {
      v10 = 0;
    }
    v11 = &dword_3004B20[10 * (unsigned __int8)CreateTask(sub_8046AD0, 3)];
    *((_WORD *)v11 + 4) = v8;
    *((_WORD *)v11 + 5) = v7;
    *((_WORD *)v11 + 6) = v10;
    *((_WORD *)v11 + 19) = 0;
  }
  StartSpriteAffineAnim((int)&gSprites[68 * *(_BYTE *)(*(_WORD *)(v1 + 58) + 0x2024BE0)], 1);
  AnimateSprite((int)&gSprites[68 * *(_BYTE *)(*(_WORD *)(v1 + 58) + 0x2024BE0)]);
  *(_WORD *)&gSprites[68 * *(_BYTE *)(*(_WORD *)(v1 + 58) + 0x2024BE0) + 48] = 4096;
  return v13;
}
