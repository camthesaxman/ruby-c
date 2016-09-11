int __fastcall sB8_set_virtual_address(int a1)
{
  int v1; // r4@1

  v1 = *(_DWORD *)(a1 + 8) - 1;
  v202E8B0 = script_read_word(a1) - v1;
  return 0;
}
