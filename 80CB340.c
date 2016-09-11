int __fastcall sub_80CB340(unsigned __int8 a1)
{
  int v1; // r4@1
  unsigned __int8 v2; // r0@1
  int *v3; // r0@3
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = obj_id_for_side_relative_to_move(1);
  if ( gSprites[68 * v2 + 62] & 4 )
  {
    move_anim_task_del(v1);
  }
  else
  {
    sub_8078E70(v2, 1);
    v3 = &dword_3004B20[10 * v1];
    *((_WORD *)v3 + 4) = word_3004B00[0];
    *((_WORD *)v3 + 5) = word_3004B02;
    *((_WORD *)v3 + 15) = 256;
    *v3 = (int)sub_80CB3A8;
  }
  return v5;
}
