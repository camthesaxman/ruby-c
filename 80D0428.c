int __fastcall sub_80D0428(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int *v2; // r0@1
  __int16 v3; // r1@1
  unsigned __int8 v4; // r0@2
  int v5; // r4@2
  int v7; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4) - 1;
  *((_WORD *)v2 + 4) = v3;
  if ( v3 == -1 )
  {
    v4 = obj_id_for_side_relative_to_move(1);
    v5 = v4;
    sub_8078F40(v4);
    sub_8079108(((unsigned int)(unsigned __int8)gSprites[68 * v5 + 5] >> 4) + 16, 1);
    move_anim_task_del(v1);
  }
  return v7;
}
