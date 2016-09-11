int __fastcall script_return(int a1)
{
  int v2; // [sp+4h] [bp-4h]@0

  *(_DWORD *)(a1 + 8) = script_stack_pop((_BYTE *)a1);
  return v2;
}
