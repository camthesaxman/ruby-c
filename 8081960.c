int __fastcall task01_battle_start(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  _BYTE *v2; // r4@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &byte_3004B28[40 * a1];
  if ( *(_WORD *)v2 )
  {
    if ( *(_WORD *)v2 == 1 && (sub_811AAE8() & 0xFF) == 1 )
    {
      SetMainCallback2((int)sub_800E7C4);
      prev_quest_postbuffer_cursor_backup_reset();
      overworld_poison_timer_set();
      DestroyTask(v1);
    }
  }
  else if ( !c3_80A0DD8_is_running() )
  {
    sub_811AABC(v2[2]);
    ++*(_WORD *)v2;
  }
  return v4;
}
