int __fastcall sub_8010520(int result)
{
  *(_WORD *)(result + 52) = 8;
  *(_WORD *)(result + 54) = (unsigned int)*(_BYTE *)(result + 62) << 29 >> 31;
  *(_DWORD *)(result + 28) = sub_801053C;
  return result;
}
