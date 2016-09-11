int __fastcall sub_80CFF50(int result)
{
  *(_WORD *)(result + 50) = -16;
  *(_WORD *)(result + 34) += 8;
  *(_DWORD *)(result + 28) = sub_80CFF68;
  return result;
}
