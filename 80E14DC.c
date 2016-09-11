int __fastcall sub_80E14DC(unsigned __int8 a1)
{
  int *v1; // r4@1
  int v2; // r5@1
  char *v3; // r0@4
  char *v4; // r1@4
  int v6; // [sp+8h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_WORD *)v1 + 4);
  if ( *((_WORD *)v1 + 4) )
  {
    if ( v2 == 1 )
      move_anim_task_del(a1);
  }
  else
  {
    *((_WORD *)v1 + 14) = (unsigned __int8)obj_id_for_side_relative_to_move(0);
    v3 = &gSprites[68 * *((_WORD *)v1 + 14) + 62];
    *v3 &= 0xFBu;
    *(_WORD *)&gSprites[68 * *((_WORD *)v1 + 14) + 36] = v2;
    v4 = &gSprites[68 * *((_WORD *)v1 + 14)];
    *((_WORD *)v4 + 19) = 160 - *((_WORD *)v4 + 17);
    ++*((_WORD *)v1 + 4);
  }
  return v6;
}
