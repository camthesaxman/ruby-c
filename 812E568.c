int __fastcall sub_812E568(unsigned __int8 a1)
{
  int *v1; // r4@1
  unsigned __int8 *v2; // r0@8
  int v4; // [sp+8h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  if ( word_3004B02 )
  {
    if ( word_3004B04 < 0 )
      word_3004B04 = 0;
    if ( word_3004B04 > 2 )
      word_3004B04 = 2;
    *((_WORD *)v1 + 4) = 0;
    *((_WORD *)v1 + 5) = 0;
    *((_WORD *)v1 + 6) = 0;
    *((_WORD *)v1 + 7) = 8 - 2 * word_3004B04;
    LOWORD(dword_3004B20[10 * a1 + 4]) = (word_3004B04 << 7) + 256;
    *((_WORD *)v1 + 9) = word_3004B04 + 2;
    *((_WORD *)v1 + 10) = word_3004B02 - 1;
    *((_WORD *)v1 + 19) = (unsigned __int8)obj_id_for_side_relative_to_move(LOBYTE(word_3004B00[0]));
    if ( word_3004B00[0] )
      v2 = (unsigned __int8 *)33748937;
    else
      v2 = (unsigned __int8 *)33748936;
    if ( (unsigned __int8)battle_side_get_owner(*v2) == 1 )
    {
      *((_WORD *)v1 + 8) = -*((_WORD *)v1 + 8);
      *((_WORD *)v1 + 9) = -*((_WORD *)v1 + 9);
    }
    sub_8078E70(*((_BYTE *)v1 + 38), 0);
    *v1 = (int)sub_812E638;
  }
  else
  {
    move_anim_task_del(a1);
  }
  return v4;
}
