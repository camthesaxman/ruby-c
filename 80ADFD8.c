int __fastcall sub_80ADFD8(unsigned __int8 a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  if ( !(v202F38F & 0x80) )
  {
    DestroyTask(a1);
    dword_300485C = (int)sub_80AE010;
    SetMainCallback2((int)c2_exit_to_overworld_2_switch);
  }
  return v2;
}
