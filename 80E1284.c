int __fastcall sub_80E1284(unsigned __int8 a1)
{
  unsigned __int8 v1; // r2@1
  int *v2; // r4@1
  unsigned int v3; // r0@1
  int v4; // r0@3
  __int16 *v5; // r0@4
  int v6; // r0@6
  char *v7; // r0@8
  __int16 v8; // r0@10
  int v9; // r2@12
  __int16 *v10; // r1@13
  __int16 v11; // r2@16
  __int16 *v12; // r1@17
  char *v13; // r1@19
  char *v14; // r0@22
  int v16; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( v3 <= 4 )
  {
    switch ( v3 )
    {
      case 0u:
        *((_WORD *)v2 + 14) = (unsigned __int8)obj_id_for_side_relative_to_move(0);
        v4 = (unsigned __int8)battle_get_per_side_status_permutated(v202F7C8);
        *((_WORD *)v2 + 15) = v4;
        if ( v4 == 1 )
        {
          *((_WORD *)v2 + 16) = word_30042C0;
          v5 = &word_30041B4;
        }
        else
        {
          *((_WORD *)v2 + 16) = word_3004288;
          v5 = &word_3004280;
        }
        *((_WORD *)v2 + 17) = *v5;
        v6 = (unsigned __int8)sub_8077FC0(v202F7C8);
        *((_WORD *)v2 + 18) = v6 - 32;
        *((_WORD *)v2 + 19) = v6 + 32;
        if ( v6 - 32 < 0 )
          *((_WORD *)v2 + 18) = 0;
        v7 = &gSprites[68 * *((_WORD *)v2 + 14) + 62];
        *v7 |= 4u;
        goto _080E1406;
      case 1u:
        sub_80E1668(*((_BYTE *)v2 + 30), *((_WORD *)v2 + 18), *((_WORD *)v2 + 19));
        goto _080E1406;
      case 2u:
        *((_WORD *)v2 + 6) = (*((_WORD *)v2 + 6) + 6) & 0x7F;
        v8 = *((_WORD *)v2 + 8) + 1;
        *((_WORD *)v2 + 8) = v8;
        if ( v8 > 2 )
        {
          *((_WORD *)v2 + 8) = 0;
          ++*((_WORD *)v2 + 7);
        }
        v9 = (gSineTable[*((_WORD *)v2 + 6)] << 16 >> 20) + *((_WORD *)v2 + 7);
        *((_WORD *)v2 + 9) = v9;
        if ( *((_WORD *)v2 + 15) == 1 )
          v10 = &word_30041B4;
        else
          v10 = &word_3004280;
        *v10 = *((_WORD *)v2 + 17) - v9;
        if ( (signed int)*((_WORD *)v2 + 9) <= 63 )
          return v16;
        v11 = 120 - *((_WORD *)v2 + 18);
        *((_WORD *)v2 + 9) = v11;
        if ( *((_WORD *)v2 + 15) == 1 )
          v12 = &word_30041B4;
        else
          v12 = &word_3004280;
        *v12 = *((_WORD *)v2 + 17) - v11;
        v13 = &gSprites[68 * *((_WORD *)v2 + 14)];
        *((_WORD *)v13 + 18) = 272 - *((_WORD *)v13 + 16);
        goto _080E1406;
      case 3u:
        byte_3004DD5 = 3;
_080E1406:
        ++*((_WORD *)v2 + 4);
        break;
      case 4u:
        move_anim_task_del(v1);
        v14 = &gSprites[68 * *((_WORD *)v2 + 14) + 62];
        *v14 |= 4u;
        break;
      default:
        return v16;
    }
  }
  return v16;
}
