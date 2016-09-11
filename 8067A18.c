signed int __fastcall s89_open_casino_game1(int a1)
{
  unsigned __int16 v1; // r0@1
  unsigned __int8 v2; // r0@1

  v1 = script_read_halfword(a1);
  v2 = VarGet(v1);
  sub_81018A0(v2, c2_exit_to_overworld_1_continue_scripts_restart_music);
  sub_80655F0();
  return 1;
}
