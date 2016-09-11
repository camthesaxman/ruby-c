int __fastcall sub_81015E0(unsigned __int8 a1)
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
      dword_300485C = (int)sub_8101678;
      SetMainCallback2((int)c2_exit_to_overworld_2_switch);
      DestroyTask(v1);
    }
  }
  else if ( !(v202F38F & 0x80) )
  {
    sub_80FF114(a1);
    *((_WORD *)v2 + 6) = 1;
  }
  return v4;
}
