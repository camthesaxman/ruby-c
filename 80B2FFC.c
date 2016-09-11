int __fastcall Task_ExitSellMenu(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r4@1
  unsigned int v3; // r5@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1 << 24;
  v2 = v1 >> 24;
  v3 = v1 >> 24;
  if ( (unsigned __int8)sub_807D770() == 1 )
  {
    if ( byte_3000714 == 2 )
      DisplayItemMessageOnField(v2, &gUnknown_0840EE5C, ReturnToShopMenuAfterExitingSellMenu, 0);
    else
      DisplayItemMessageOnField(v3, &gUnknown_0840EE30, ReturnToShopMenuAfterExitingSellMenu, 0);
  }
  return v5;
}
