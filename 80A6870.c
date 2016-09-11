int __fastcall sub_80A6870(unsigned __int16 a1, unsigned __int8 a2)
{
  int v2; // r4@1
  int v3; // r0@1
  int v5; // [sp+8h] [bp-4h]@0

  v2 = a2;
  v3 = itemid_get_market_price(a1);
  sub_80B79B8(33708996, ((unsigned int)(v3 << 16) >> 17) * v2);
  sub_80B7BEC(v2025BC4, 0, 0);
  return v5;
}
