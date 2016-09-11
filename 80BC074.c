int __fastcall sub_80BC074(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int *v2; // r4@1
  signed int v3; // r0@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( v3 == 1 )
  {
    if ( !(v202F38F & 0x80) )
      *((_WORD *)v2 + 4) = 2;
  }
  else if ( v3 > 1 )
  {
    if ( v3 == 2 )
    {
      copy_saved_warp2_bank_and_enter_x_to_warp1();
      warp_in();
      dword_300485C = (int)mapldr_default;
      SetMainCallback2((int)c2_load_new_map);
      script_env_2_disable();
      DestroyTask(v1);
    }
  }
  else if ( !*((_WORD *)v2 + 4) )
  {
    script_env_2_enable();
    *((_WORD *)v2 + 4) = 1;
  }
  return v5;
}
