int __fastcall sub_80E9C74(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  MenuFillWindowRectWithBlankTile(
    0,
    2 * (((a1 << 16) & 0x70000u) >> 16),
    0x1Du,
    2 * (((a1 << 16) & 0x70000u) >> 16) + 1);
  return v2;
}
