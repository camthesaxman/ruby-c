int __fastcall sub_80B389C(unsigned __int16 a1, unsigned __int8 a2, int a3)
{
  int v3; // r8@1
  unsigned __int16 v4; // r9@1
  __int16 v5; // r4@1
  char *v6; // r5@1
  __int16 v7; // r7@3
  char *v8; // r5@3
  unsigned __int16 v9; // r4@5
  char v10; // r0@5
  int v12; // [sp+1Ch] [bp-4h]@0

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = &gStringVar1;
  if ( a3 )
  {
    gStringVar1 = -4;
    byte_20231CD = 1;
    byte_20231CE = 2;
    v6 = &byte_20231CF;
  }
  itemid_copy_name(a1, v6);
  v7 = 8 * v5;
  sub_8072A18((int)&gStringVar1, 112, 8 * v5, 88, 1);
  v8 = &gStringVar1;
  if ( v3 )
    v8 = &byte_20231CF;
  v9 = itemid_get_market_price(v4);
  v10 = GetPriceReduction(1);
  sub_80B79F8(v8, (signed int)v9 >> v10, 4);
  sub_80729D8((int)&gStringVar1, -54, v7, 1u);
  return v12;
}
