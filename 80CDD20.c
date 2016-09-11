int __fastcall sub_80CDD20(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int *v2; // r4@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v2 + 7) )
  {
    *((_WORD *)v2 + 8) -= *((_WORD *)v2 + 9);
    obj_id_set_rotscale(*((_BYTE *)v2 + 8), 0x100u, 256, *((_WORD *)v2 + 8));
    sub_8078F9C(*((_BYTE *)v2 + 8));
    --*((_WORD *)v2 + 7);
  }
  else
  {
    sub_8078F40(*((_BYTE *)v2 + 8));
    move_anim_task_del(v1);
  }
  return v4;
}
