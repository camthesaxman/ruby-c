int __fastcall sub_808AB34(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    if ( HIWORD(dword_3004B20[10 * a1 + 7]) != 5 || sub_8147588() << 24 )
      SetMainCallback2((int)c2_exit_to_overworld_2_switch);
    else
      SetMainCallback2((int)sub_80FC074);
    DestroyTask(v1);
  }
  return v3;
}
