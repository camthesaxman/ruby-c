int __fastcall sub_80C2EA0(unsigned __int8 a1)
{
  int *v1; // r4@2
  unsigned int v2; // r0@3
  int v4; // [sp+8h] [bp-4h]@0

  if ( !(v202F38F & 0x80) )
  {
    v1 = &dword_3004B20[10 * a1];
    if ( *((_WORD *)v1 + 5) )
    {
      if ( *((_WORD *)v1 + 5) != 1 )
      {
        v4000050 = v202F38F & 0x80;
        v4000054 = v202F38F & 0x80;
        DestroyTask(a1);
        SetMainCallback2((int)c2_exit_to_overworld_1_continue_scripts_restart_music);
        return v4;
      }
      v2 = -65536;
    }
    else
    {
      DestroyTask(v2018003);
      v2 = 0xFFFF;
    }
    BlendPalettes(v2, 0x10u, 0);
    ++*((_WORD *)v1 + 5);
  }
  return v4;
}
