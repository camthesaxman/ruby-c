int __fastcall sub_80CE210(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int *v2; // r3@1
  __int16 v3; // r0@1
  __int16 v4; // r1@2
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4) + 1;
  *((_WORD *)v2 + 4) = v3;
  if ( v3 == 4 )
  {
    *((_WORD *)v2 + 4) = 0;
    v4 = *((_WORD *)v2 + 5) + 1;
    *((_WORD *)v2 + 5) = v4;
    v4000052 = v4 | ((16 - v4) << 8);
    if ( *((_WORD *)v2 + 5) == 16 )
      move_anim_task_del(v1);
  }
  return v6;
}
