int __fastcall ReturnToShopMenuAfterExitingSellMenu(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  CreateShopMenu(byte_3000714);
  DestroyTask(v1);
  return v3;
}
