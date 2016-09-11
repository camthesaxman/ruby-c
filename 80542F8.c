int __fastcall c1_overworld_normal(unsigned __int16 a1, unsigned __int16 a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r0@1
  int v5; // r0@3
  unsigned __int8 v7; // [sp+0h] [bp-14h]@1
  int v8; // [sp+10h] [bp-4h]@5

  v2 = a1;
  v3 = a2;
  sub_8059204();
  sub_8067EEC(&v7);
  v4 = process_overworld_input(&v7, v2, v3);
  if ( !(script_env_2_is_enabled(v4) << 24) )
  {
    if ( sub_8068024(&v7) == 1 )
    {
      v5 = script_env_2_enable();
      HideMapNamePopUpWindow(v5);
    }
    else
    {
      player_step(*(&v7 + 2), v2, v3);
    }
  }
  return v8;
}
