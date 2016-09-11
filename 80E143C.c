int __fastcall sub_80E143C(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  char *v2; // r1@1
  __int16 *v3; // r0@2
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &gSprites[68 * (unsigned __int8)obj_id_for_side_relative_to_move(0)];
  v2[62] |= 4u;
  *((_WORD *)v2 + 18) = 0;
  *((_WORD *)v2 + 19) = 0;
  if ( (unsigned __int8)battle_get_per_side_status_permutated(v202F7C8) == 1 )
    v3 = &word_30041B4;
  else
    v3 = &word_3004280;
  *v3 = 0;
  move_anim_task_del(v1);
  return v5;
}
