int __fastcall sub_812B108(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r4@1
  __int16 v3; // r0@1
  int v4; // r0@2
  int *v5; // r4@4
  __int16 v6; // r0@4
  int v8; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 16);
  *((_WORD *)v2 + 16) = v3 + 1;
  if ( v3 != *((_WORD *)v2 + 10)
    || (*((_WORD *)v2 + 16) = 0,
        audio_play_and_stuff(*((_WORD *)v2 + 4), *((_BYTE *)v2 + 30)),
        v4 = *((_WORD *)v2 + 8) - 1,
        *((_WORD *)v2 + 8) = v4,
        v4 << 16) )
  {
    v5 = &dword_3004B20[10 * v1];
    v6 = *((_WORD *)v5 + 14);
    *((_WORD *)v5 + 14) = v6 + 1;
    if ( v6 == *((_WORD *)v5 + 9) )
    {
      *((_WORD *)v5 + 14) = 0;
      *((_WORD *)v5 + 15) += *((_WORD *)v5 + 7);
      *((_WORD *)v5 + 15) = sub_8077104(*((_WORD *)v5 + 15));
    }
  }
  else
  {
    move_anim_related_task_del(v1);
  }
  return v8;
}
