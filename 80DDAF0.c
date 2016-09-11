int __fastcall sub_80DDAF0(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int *v2; // r4@1
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( !*((_WORD *)v2 + 4) )
  {
    sub_80789D4(0);
    ++*((_WORD *)v2 + 4);
    *((_WORD *)v2 + 6) = word_30041B8;
  }
  *((_WORD *)v2 + 5) = (*((_WORD *)v2 + 5) + 80) & 0xFF;
  word_30041B8 = cosine(4, *((_WORD *)v2 + 5)) + *((_WORD *)v2 + 6);
  if ( word_3004B0E == 4095 )
  {
    word_30041B8 = 0;
    sub_80789D4(1);
    move_anim_task_del(v1);
  }
  return v4;
}
