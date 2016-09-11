int __fastcall script_call(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v5; // [sp+8h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  script_stack_push((_BYTE *)a1, *(_DWORD *)(a1 + 8));
  *(_DWORD *)(v2 + 8) = v3;
  return v5;
}
