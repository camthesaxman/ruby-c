int __fastcall sub_8131944(int a1)
{
  int v1; // r8@1
  unsigned int v2; // r0@1
  int v3; // r7@3
  int *v4; // r6@3
  char *v5; // r2@4
  int v6; // r3@4
  int *v7; // r4@6
  int v8; // r10@9
  int v9; // r9@9
  int v10; // r5@9
  int v11; // r4@9
  unsigned __int8 v12; // r7@9
  int v13; // r2@10
  int v14; // r2@11
  __int16 v15; // r6@14
  int v16; // r2@15
  unsigned __int8 v17; // r0@20
  int v18; // r5@20
  int *v19; // r1@22
  int *v20; // r6@23
  int v21; // r5@23
  char *v22; // r2@24
  int v23; // r3@24
  int *v24; // r6@26
  int v25; // r5@26
  int v26; // r7@34
  int v27; // r7@39
  char *v28; // r6@40
  int v29; // r4@40
  unsigned __int8 v30; // r0@40
  int v31; // r3@40
  char *v32; // r6@42
  int v33; // r4@42
  unsigned __int8 v34; // r0@42
  int *v36; // [sp+10h] [bp-24h]@39
  int v37; // [sp+30h] [bp-4h]@0

  a1 = (unsigned __int8)a1;
  v1 = a1;
  v2 = LOWORD(dword_3004B20[10 * (unsigned __int8)a1 + 2]);
  if ( v2 <= 4 )
  {
    switch ( v2 )
    {
      case 0u:
        v3 = (unsigned __int8)obj_id_for_side_relative_to_move(0);
        v4 = &dword_3004B20[10 * v1];
        *((_WORD *)v4 + 5) += 2048;
        if ( battle_side_get_owner(v202F7C8) << 24 )
        {
          *(_WORD *)&gSprites[68 * v3 + 36] -= HIWORD(dword_3004B20[10 * v1 + 2]) << 16 >> 24;
          v5 = gSprites;
          v6 = 16 * v3;
        }
        else
        {
          v5 = gSprites;
          v6 = 16 * v3;
          *(_WORD *)&gSprites[68 * v3 + 36] += HIWORD(dword_3004B20[10 * v1 + 2]) << 16 >> 24;
        }
        v7 = &dword_3004B20[10 * v1];
        *((_WORD *)v7 + 5) = *((_BYTE *)v7 + 10);
        if ( ((*(_WORD *)&v5[4 * (v6 + v3) + 36] + (unsigned int)*(_WORD *)&v5[4 * (v6 + v3) + 32]) << 16) + 0x200000 > 0x1300000 )
        {
          *((_WORD *)v7 + 5) = 0;
          ++*((_WORD *)v7 + 4);
        }
        return v37;
      case 1u:
        if ( sub_8076BE0() << 24 )
        {
          v8 = v2019350;
          v9 = v2019354;
          LOWORD(v10) = v2019348;
          v11 = sub_8079E90(v202F7C8) & 0xFF;
          v12 = 0;
        }
        else
        {
          if ( !(battle_side_get_owner(v202F7C8) << 24) )
          {
            v8 = GetMonData((int)&dword_3004360[25 * *(_WORD *)(2 * v202F7C8 + 0x2024A6A)], 0, v13);
            v9 = GetMonData((int)&dword_3004360[25 * *(_WORD *)(2 * v202F7C8 + 0x2024A6A)], 1, v14);
            if ( *(_WORD *)(4 * v202F7C8 + 0x2017802) )
              LOWORD(v10) = *(_WORD *)(4 * v202F7C8 + 0x2017802);
            else
              v10 = GetMonData((int)&dword_3004360[25 * *(_WORD *)(2 * v202F7C8 + 0x2024A6A)], 11, v202F7C8) & 0xFFFF;
            v11 = ((unsigned __int8)gSprites[68 * (unsigned __int8)obj_id_for_side_relative_to_move(1) + 67] + 1) & 0xFF;
            v12 = 0;
            v15 = 272;
            goto _08131B94;
          }
          v8 = GetMonData((int)&unk_30045C0 + 100 * *(_WORD *)(2 * v202F7C8 + 0x2024A6A), 0, v13);
          v9 = GetMonData((int)&unk_30045C0 + 100 * *(_WORD *)(2 * v202F7C8 + 0x2024A6A), 1, v16);
          if ( *(_WORD *)(4 * v202F7C8 + 0x2017802) )
            LOWORD(v10) = *(_WORD *)(4 * v202F7C8 + 0x2017802);
          else
            v10 = GetMonData((int)&unk_30045C0 + 100 * *(_WORD *)(2 * v202F7C8 + 0x2024A6A), 11, v202F7C8) & 0xFFFF;
          v11 = ((unsigned __int8)gSprites[68 * (unsigned __int8)obj_id_for_side_relative_to_move(1) + 67] - 1) & 0xFF;
          v12 = 1;
        }
        v15 = -32;
_08131B94:
        v17 = sub_8077ABC(v202F7C9, 1u);
        v18 = (unsigned __int8)sub_8079F44(v10, v12, 0, v15, v17, v11, v8, v9);
        if ( *(_WORD *)(4 * v202F7C8 + 0x2017802) )
          BlendPalette(16 * ((unsigned int)(unsigned __int8)gSprites[68 * v18 + 5] >> 4) | 0x100, 0x10u, 6u, 0x7FFF);
        v19 = &dword_3004B20[10 * v1];
        *((_WORD *)v19 + 19) = v18;
        goto _08131DB6;
      case 2u:
        v20 = &dword_3004B20[10 * v1];
        v21 = *((_WORD *)v20 + 19) & 0xFF;
        *((_WORD *)v20 + 5) += 2048;
        if ( battle_side_get_owner(v202F7C8) << 24 )
        {
          v22 = gSprites;
          v23 = 16 * v21;
          *(_WORD *)&gSprites[68 * v21 + 36] += HIWORD(dword_3004B20[10 * v1 + 2]) << 16 >> 24;
        }
        else
        {
          *(_WORD *)&gSprites[68 * v21 + 36] -= HIWORD(dword_3004B20[10 * v1 + 2]) << 16 >> 24;
          v22 = gSprites;
          v23 = 16 * v21;
        }
        v24 = &dword_3004B20[10 * v1];
        *((_WORD *)v24 + 5) = *((_BYTE *)v24 + 10);
        v25 = (*(_WORD *)&v22[4 * (v23 + v21) + 36] + *(_WORD *)&v22[4 * (v23 + v21) + 32]) & 0xFFFF;
        if ( *((_WORD *)v24 + 18) )
          goto _08131D0E;
        if ( battle_side_get_owner(v202F7C8) << 24 )
        {
          if ( (signed __int16)v25 <= (signed int)(unsigned __int8)sub_8077ABC(v202F7C9, 0) )
            goto _08131D0E;
        }
        else if ( (signed __int16)v25 >= (signed int)(unsigned __int8)sub_8077ABC(v202F7C9, 0) )
        {
          goto _08131D0E;
        }
        ++*((_WORD *)v24 + 18);
        word_3004B0E = -1;
_08131D0E:
        if ( (unsigned int)((v25 << 16) + 0x200000) > 0x1300000 )
        {
          v19 = &dword_3004B20[10 * v1];
          *((_WORD *)v19 + 5) = 0;
_08131DB6:
          ++*((_WORD *)v19 + 4);
        }
        return v37;
      case 3u:
        v26 = (unsigned __int8)obj_id_for_side_relative_to_move(0);
        sub_807A0F4((int)&gSprites[68 * (HIWORD(dword_3004B20[10 * v1 + 9]) & 0xFF)]);
        if ( battle_side_get_owner(v202F7C8) << 24 )
          *(_WORD *)&gSprites[68 * v26 + 36] = 272 - *(_WORD *)&gSprites[68 * v26 + 32];
        else
          *(_WORD *)&gSprites[68 * v26 + 36] = -*(_WORD *)&gSprites[68 * v26 + 32] - 32;
        v19 = &dword_3004B20[10 * v1];
        goto _08131DB6;
      case 4u:
        v27 = (unsigned __int8)obj_id_for_side_relative_to_move(0);
        HIWORD(dword_3004B20[10 * v1 + 2]) += 2048;
        v36 = &dword_3004B20[10 * v1];
        if ( battle_side_get_owner(v202F7C8) << 24 )
        {
          v32 = &gSprites[68 * v27];
          *((_WORD *)v32 + 18) -= *((_WORD *)v36 + 5) << 16 >> 24;
          v33 = *((_WORD *)v32 + 18) + *((_WORD *)v32 + 16);
          v34 = sub_8077ABC(v202F7C8, 0);
          v31 = 16 * v27;
          if ( v33 <= v34 )
            *((_WORD *)v32 + 18) = 0;
        }
        else
        {
          v28 = &gSprites[68 * v27];
          *((_WORD *)v28 + 18) += *((_WORD *)v36 + 5) << 16 >> 24;
          v29 = *((_WORD *)v28 + 18) + *((_WORD *)v28 + 16);
          v30 = sub_8077ABC(v202F7C8, 0);
          v31 = 16 * v27;
          if ( v29 >= v30 )
            *((_WORD *)v28 + 18) = 0;
        }
        HIWORD(dword_3004B20[10 * v1 + 2]) = BYTE2(dword_3004B20[10 * v1 + 2]);
        if ( !*(_WORD *)&gSprites[4 * (v31 + v27) + 36] )
          move_anim_task_del(v1);
        return v37;
      default:
        return v37;
    }
  }
  return v37;
}
