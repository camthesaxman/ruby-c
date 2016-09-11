int __fastcall GetWindowTilemapEntry(int a1, unsigned __int8 a2, int a3)
{
  return *(_WORD *)(2 * ((32 * a3 & 0x1FFF) + a2) + *(_DWORD *)(a1 + 40));
}
