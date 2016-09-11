int __fastcall sub_8078104(int result)
{
  *(_DWORD *)(result + 28) = *(_WORD *)(result + 58) | (*(_WORD *)(result + 60) << 16);
  return result;
}
