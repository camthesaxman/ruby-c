int __fastcall script_stop(int result)
{
  *(_BYTE *)(result + 1) = 0;
  *(_DWORD *)(result + 8) = 0;
  return result;
}
