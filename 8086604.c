int __fastcall task00_8084310(unsigned __int8 a1)
{
  unsigned __int8 v1; // r6@1
  int *v2; // r4@1
  int v3; // r5@1
  int v5; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( !*((_WORD *)v2 + 4) )
  {
    if ( !(sub_807D770() << 24) )
      return v5;
    v202FF84 = (unsigned __int8)byte_3005CE0;
    if ( (signed int)(unsigned __int8)byte_3005CE0 > 5 )
      v202FF84 = v3;
    FieldEffectStart(0x1Fu);
    ++*((_WORD *)v2 + 4);
  }
  if ( !(FieldEffectActiveListContains(0x1Fu) << 24) )
  {
    flag_var_implications_of_teleport_();
    warp_in();
    SetMainCallback2((int)c2_load_new_map);
    dword_300485C = (int)mapldr_08084390;
    DestroyTask(v1);
  }
  return v5;
}
