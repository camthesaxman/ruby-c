int __fastcall CreateDecorationShop2Menu(_WORD *a1)
{
  _WORD *v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  CreateShopMenu(2u);
  SetShopItemsForSale(v1);
  SetShopMenuCallback((int)script_env_2_enable_and_set_ctx_running);
  return v3;
}
