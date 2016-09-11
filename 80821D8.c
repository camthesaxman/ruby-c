int sub_80821D8()
{
  int v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  UpdatePaletteFade();
  v0 = RunTasks();
  if ( (sub_811AAE8(v0) & 0xFF) == 1 )
  {
    v20239F8 = 16;
    dword_3001778 = (int)sub_8082228;
    SetMainCallback2((int)sub_800E7C4);
    prev_quest_postbuffer_cursor_backup_reset();
    overworld_poison_timer_set();
    sav12_xor_increment(7u);
    sav12_xor_increment(8u);
  }
  return v2;
}
