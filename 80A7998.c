int __fastcall sub_80A7998(int result)
{
  *(_BYTE *)(result + 42) = 0;
  *(_WORD *)(result + 46) = 0;
  *(_WORD *)(result + 48) = 0;
  *(_WORD *)(result + 50) = 0;
  *(_WORD *)(result + 52) = 0;
  *(_WORD *)(result + 54) = 0;
  *(_DWORD *)(result + 28) = sub_80A79B4;
  return result;
}
