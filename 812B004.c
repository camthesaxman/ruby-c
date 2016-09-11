int __fastcall sub_812B004(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int *v2; // r4@1
  __int16 v3; // r0@1
  char v4; // r0@2
  __int16 v5; // r0@2
  int v7; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 14) + 1;
  *((_WORD *)v2 + 14) = v3;
  if ( v3 == 6 )
  {
    *((_WORD *)v2 + 14) = 0;
    v4 = sub_8076F98(0x3Fu);
    audio_play_and_stuff(*((_WORD *)v2 + 5), v4);
    v5 = *((_WORD *)v2 + 15) + 1;
    *((_WORD *)v2 + 15) = v5;
    if ( v5 == 2 )
      move_anim_related_task_del(v1);
  }
  return v7;
}
