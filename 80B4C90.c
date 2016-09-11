int __fastcall GetBerryTypeByBerryTreeId(int a1)
{
  return *(_BYTE *)((8 * a1 & 0x7FF) + 0x2026D3C);
}
