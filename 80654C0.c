int __fastcall script_jump(int result, int a2)
{
  *(_DWORD *)(result + 8) = a2;
  return result;
}
