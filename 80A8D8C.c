int __fastcall sub_80A8D8C(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int *v2; // r4@1
  unsigned __int8 v3; // r6@1
  __int16 v4; // r0@1
  __int16 v5; // r2@2
  int v7; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  *((_WORD *)v2 + 14) += *((_WORD *)v2 + 4);
  *((_WORD *)v2 + 15) += *((_WORD *)v2 + 5);
  v3 = *((_BYTE *)v2 + 16);
  obj_id_set_rotscale(*((_BYTE *)v2 + 16), *((_WORD *)v2 + 14), *((_WORD *)v2 + 15), 0);
  v4 = *((_WORD *)v2 + 6) - 1;
  *((_WORD *)v2 + 6) = v4;
  if ( !v4 )
  {
    v5 = *((_WORD *)v2 + 7);
    if ( (signed int)*((_WORD *)v2 + 7) <= 0 )
    {
      sub_8078F40(v3);
      move_anim_task_del(v1);
    }
    else
    {
      *((_WORD *)v2 + 4) = -*((_WORD *)v2 + 4);
      *((_WORD *)v2 + 5) = -*((_WORD *)v2 + 5);
      *((_WORD *)v2 + 6) = v5;
      *((_WORD *)v2 + 7) = 0;
    }
  }
  return v7;
}
