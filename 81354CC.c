int __fastcall sub_81354CC(int a1, int a2, int a3)
{
  signed int v3; // r5@5
  __int16 v5; // [sp+0h] [bp-10h]@6
  int v6; // [sp+Ch] [bp-4h]@9

  if ( v202E8CC == 1 )
  {
    v3 = 0;
    do
    {
      v5 = GetMonData(100 * v3 + 33708396, 12, a3);
      SetMonData((int)&dword_3004360[25 * v3++], 12, (int)&v5);
    }
    while ( v3 <= 5 );
  }
  else if ( (signed int)v202E8CC > 1 && v202E8CC == 2 )
  {
    sub_81360D0();
  }
  SetMainCallback2((int)c2_exit_to_overworld_1_continue_scripts_restart_music);
  return v6;
}
