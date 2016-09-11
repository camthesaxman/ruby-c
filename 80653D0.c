signed int __fastcall script_setup_bytecode_script(int a1, int a2)
{
  *(_DWORD *)(a1 + 8) = a2;
  *(_BYTE *)(a1 + 1) = 1;
  return 1;
}
