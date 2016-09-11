int __fastcall c1_overworld_prev_quest(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int *v2; // r5@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v2 + 6) )
  {
    if ( *((_WORD *)v2 + 6) == 1 )
    {
      sub_81016F4();
      FreeSpritePaletteByTag(0xBB8u);
      dword_300485C = (int)sub_8100364;
      SetMainCallback2((int)c2_exit_to_overworld_2_switch);
      DestroyTask(v1);
    }
  }
  else
  {
    script_env_2_enable();
    if ( !(v202F38F & 0x80) )
    {
      sub_80FF114(v1);
      *((_WORD *)v2 + 6) = 1;
    }
  }
  return v4;
}
