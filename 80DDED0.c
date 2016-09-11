int __fastcall sub_80DDED0(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int *v2; // r4@1
  unsigned __int8 v3; // r1@3
  __int16 v4; // r0@3
  int v6; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( (signed int)*((_WORD *)v2 + 5) <= 0 )
  {
    v3 = obj_id_for_side_relative_to_move(0);
    v4 = *((_WORD *)v2 + 4) + 8;
    *((_WORD *)v2 + 4) = v4;
    if ( v4 > 255 )
    {
      sub_8078F40(v3);
      move_anim_task_del(v1);
      v4000050 = 0;
      v4000052 = 0;
    }
    else
    {
      obj_id_set_rotscale(v3, *((_WORD *)v2 + 4), *((_WORD *)v2 + 4), 0);
    }
  }
  else
  {
    --*((_WORD *)v2 + 5);
  }
  return v6;
}
