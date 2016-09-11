int __fastcall sub_812B404(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int *v2; // r4@1
  __int16 v3; // r2@1
  __int16 v4; // r0@1
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 7);
  v4 = *((_WORD *)v2 + 14);
  *((_WORD *)v2 + 14) = v4 + 1;
  if ( v4 == *((_WORD *)v2 + 9) )
  {
    *((_WORD *)v2 + 14) = 0;
    *((_WORD *)v2 + 15) += v3;
    *((_WORD *)v2 + 15) = sub_8077104(*((_WORD *)v2 + 15));
  }
  v202F7D2 = *((_WORD *)v2 + 15);
  if ( *((_WORD *)v2 + 15) == *((_WORD *)v2 + 6) )
    move_anim_task_del(v1);
  return v6;
}
