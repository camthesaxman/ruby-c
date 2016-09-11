int __fastcall tilemap_move_something(int result, char a2, char a3)
{
  *(_BYTE *)(result + 2) += a2;
  *(_BYTE *)(result + 2) &= 0x1Fu;
  *(_BYTE *)(result + 3) += a3;
  *(_BYTE *)(result + 3) &= 0x1Fu;
  return result;
}
