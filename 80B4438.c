int __fastcall Task_ExitBuyMenu(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v2; // r0@2
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    v2 = RemoveMoneyLabelObject(0, 0);
    BuyMenuFreeMemory(v2);
    SetMainCallback2((int)c2_exit_to_overworld_2_switch);
    DestroyTask(v1);
  }
  return v4;
}
