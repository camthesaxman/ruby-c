int __fastcall sub_80E1560(unsigned __int8 a1)
{
  unsigned __int8 v1; // r2@1
  int *v2; // r4@1
  unsigned int v3; // r0@1
  int v4; // r0@3
  __int16 *v5; // r0@4
  int v6; // r0@6
  char *v7; // r0@9
  int v9; // [sp+4h] [bp-4h]@0

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
          v5 = &word_30042C0;
        else
          v5 = &word_3004288;
        *((_WORD *)v2 + 16) = *v5;
        v6 = (unsigned __int8)sub_8077FC0(v202F7C8);
        *((_WORD *)v2 + 18) = v6 - 32;
        *((_WORD *)v2 + 19) = v6 + 32;
        goto _080E164A;
      case 1u:
        sub_80E1668(*((_BYTE *)v2 + 30), 0, *((_WORD *)v2 + 19));
        goto _080E164A;
      case 2u:
        *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 14) + 38] = 96;
        goto _080E164A;
      case 3u:
        v7 = &gSprites[68 * *((_WORD *)v2 + 14)];
        *((_WORD *)v7 + 19) -= 8;
        if ( !*(_WORD *)&gSprites[68 * *((_WORD *)v2 + 14) + 38] )
        {
          byte_3004DD5 = 3;
_080E164A:
          ++*((_WORD *)v2 + 4);
        }
        break;
      case 4u:
        move_anim_task_del(v1);
        break;
      default:
        return v9;
    }
  }
  return v9;
}
