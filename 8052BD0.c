int __fastcall sub_8052BD0(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r4@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( !*((_WORD *)v2 + 4) )
  {
    fanfare_play(367);
    ++*((_WORD *)v2 + 4);
  }
  if ( task_is_not_running_overworld_fanfare() << 24 )
  {
    sub_8075474(*(_WORD *)(dword_3004854 + 376));
    DestroyTask(v1);
  }
  return v4;
}
