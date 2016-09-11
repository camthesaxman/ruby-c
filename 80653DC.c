int __fastcall script_setup_asm_script(int result, int a2)
{
  *(_BYTE *)(result + 1) = 2;
  *(_DWORD *)(result + 4) = a2;
  return result;
}
