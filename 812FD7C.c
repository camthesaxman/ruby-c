int __fastcall sub_812FD7C(unsigned __int8 a1)
{
  int *v1; // r5@1
  unsigned __int8 *v2; // r0@4
  unsigned __int8 v3; // r4@6
  unsigned __int8 v4; // r0@6
  int v6; // [sp+8h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  if ( !word_3004B02 )
    move_anim_task_del(a1);
  *((_WORD *)v1 + 4) = 0;
  *((_WORD *)v1 + 5) = 0;
  *((_WORD *)v1 + 6) = 0;
  *((_WORD *)v1 + 7) = word_3004B02;
  if ( word_3004B00[0] )
    v2 = (unsigned __int8 *)33748937;
  else
    v2 = (unsigned __int8 *)33748936;
  v3 = *v2;
  *((_WORD *)v1 + 8) = (unsigned __int8)sub_8077ABC(*v2, 0);
  *((_WORD *)v1 + 9) = (unsigned __int8)sub_8077ABC(v3, 1u);
  *((_WORD *)v1 + 10) = (unsigned __int8)sub_8079E90(v3);
  v4 = obj_id_for_side_relative_to_move(LOBYTE(word_3004B00[0]));
  *((_WORD *)v1 + 19) = v4;
  sub_80798F4((int)v1, v4);
  *v1 = (int)sub_812FE20;
  return v6;
}
