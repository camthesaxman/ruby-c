int __fastcall sub_80DDA8C(unsigned __int8 a1)
{
  unsigned __int8 v1; // r6@1
  int *v2; // r5@1
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( !*((_WORD *)v2 + 4) )
  {
    sub_80789D4(0);
    *((_WORD *)v2 + 5) = 200;
  }
  word_30041B8 += *((_WORD *)v2 + 5) / 10;
  *((_WORD *)v2 + 5) -= 3;
  if ( *((_WORD *)v2 + 4) == 120 )
  {
    sub_80789D4(1);
    move_anim_task_del(v1);
  }
  ++*((_WORD *)v2 + 4);
  return v4;
}
