int __fastcall sAC_open_door(int a1)
{
  int v1; // r4@1
  unsigned __int16 v2; // r0@1
  int v3; // r5@1
  unsigned __int16 v4; // r0@1
  int v5; // r5@1
  int v6; // r4@1
  unsigned __int16 v7; // r0@1

  v1 = a1;
  v2 = script_read_halfword(a1);
  v3 = (unsigned __int16)VarGet(v2);
  v4 = script_read_halfword(v1);
  v5 = (v3 + 7) & 0xFFFF;
  v6 = (unsigned int)((VarGet(v4) << 16) + 458752) >> 16;
  v7 = sub_8058790(v5, v6);
  audio_play(v7);
  task_overworld_door_add_if_role_69_for_opening_door_at(v5, v6);
  return 0;
}
