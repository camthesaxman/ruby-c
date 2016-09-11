int __fastcall sub_80E3A58(unsigned __int8 a1)
{
  unsigned __int8 v1; // r6@1
  int v2; // r5@1
  int *v3; // r1@4
  int v5; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  sub_80789D4(0);
  v2 = (unsigned __int8)CreateTask((int)sub_80E3AD0, 5);
  if ( word_3004B04 && battle_side_get_owner(v202F7C8) << 24 )
  {
    word_3004B00[0] = -word_3004B00[0];
    word_3004B02 = -word_3004B02;
  }
  v3 = &dword_3004B20[10 * v2];
  *((_WORD *)v3 + 5) = word_3004B00[0];
  *((_WORD *)v3 + 6) = word_3004B02;
  *((_WORD *)v3 + 7) = word_3004B06;
  ++*((_WORD *)v3 + 4);
  move_anim_task_del(v1);
  return v5;
}
