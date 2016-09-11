int __fastcall sub_80E0E24(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int v2; // r2@3
  unsigned __int8 v3; // r4@4
  int v4; // r4@10
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( (unsigned int)word_3004B00[0] > 7 )
  {
def_80E0E40:
    v2 = 255;
  }
  else
  {
    switch ( word_3004B00[0] )
    {
      case 0:
      case 1:
      case 2:
      case 3:
        v2 = obj_id_for_side_relative_to_move(LOBYTE(word_3004B00[0])) & 0xFF;
        goto _080E0EB6;
      case 4:
        v3 = 0;
        break;
      case 5:
        v3 = 2;
        break;
      case 6:
        v3 = 1;
        break;
      case 7:
        v3 = 3;
        break;
      default:
        goto def_80E0E40;
    }
    v4 = (unsigned __int8)battle_get_side_with_given_state(v3);
    if ( b_side_obj__get_some_boolean(v4) << 24 )
      v2 = *(_BYTE *)(v4 + 33704928);
    else
      v2 = 255;
  }
_080E0EB6:
  if ( v2 != 255 )
    sub_8079108(((unsigned int)(unsigned __int8)gSprites[68 * v2 + 5] >> 4) + 16, (unsigned __int8)word_3004B02);
  move_anim_task_del(v1);
  return v6;
}
