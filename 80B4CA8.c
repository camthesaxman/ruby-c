int __fastcall GetStageByBerryTreeId(int a1)
{
  return *(_BYTE *)((8 * a1 & 0x7FF) + 0x2026D3D) & 0x7F;
}
