int __fastcall sub_80D074C(unsigned __int8 a1)
{
  int *v1; // r4@1
  unsigned __int8 v2; // r0@3
  int v4; // [sp+8h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  if ( word_3004B02 )
  {
    v2 = obj_id_for_side_relative_to_move(LOBYTE(word_3004B00[0]));
    *((_WORD *)v1 + 4) = v2;
    *((_WORD *)v1 + 5) = 0;
    *((_WORD *)v1 + 6) = word_3004B02;
    *((_WORD *)v1 + 7) = 0;
    *((_WORD *)v1 + 8) = 0;
    sub_80798F4((int)v1, v2);
    *v1 = (int)sub_80D07AC;
  }
  else
  {
    move_anim_task_del(a1);
  }
  return v4;
}
