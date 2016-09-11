int __fastcall RedrawMenuCursor(int a1, int a2)
{
  int v3; // [sp+0h] [bp-4h]@0

  sub_814A880((unsigned int)((a1 << 27) + 0x8000000) >> 24, 8 * a2 & 0xFF);
  return v3;
}
