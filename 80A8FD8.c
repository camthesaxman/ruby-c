int __fastcall sub_80A8FD8(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int *v2; // r4@1
  __int16 v3; // r0@3
  signed int v4; // r0@4
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  *((_WORD *)v2 + 7) += *((_WORD *)v2 + 8);
  obj_id_set_rotscale(*((_BYTE *)v2 + 18), 0x100u, 256, *((_WORD *)v2 + 7));
  if ( *((_WORD *)v2 + 11) )
    sub_8078F9C(*((_BYTE *)v2 + 18));
  v3 = *((_WORD *)v2 + 5) + 1;
  *((_WORD *)v2 + 5) = v3;
  if ( v3 >= (signed int)*((_WORD *)v2 + 6) )
  {
    v4 = *((_WORD *)v2 + 10);
    if ( v4 == 1 )
    {
      sub_8078F40(*((_BYTE *)v2 + 18));
    }
    else if ( v4 > 1 && v4 == 2 )
    {
      *((_WORD *)v2 + 5) = 0;
      *((_WORD *)v2 + 8) = -*((_WORD *)v2 + 8);
      *((_WORD *)v2 + 10) = 1;
      return v6;
    }
    move_anim_task_del(v1);
  }
  return v6;
}
