int __fastcall sub_8123170(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    dword_300485C = (int)sub_81231AC;
    SetMainCallback2((int)c2_exit_to_overworld_2_switch);
    DestroyTask(v1);
  }
  return v3;
}
