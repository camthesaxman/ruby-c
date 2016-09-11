int __fastcall sub_8046E7C(int result)
{
  *(_BYTE *)(result + 44) |= 0x40u;
  *(_DWORD *)(result + 28) = sub_8046FBC;
  *(_WORD *)(result + 52) = 0;
  *(_WORD *)(result + 54) = 0;
  *(_WORD *)(result + 56) = 0;
  return result;
}
