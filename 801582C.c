int __fastcall b_movescr_stack_push(int a1)
{
  int v1; // r1@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = v2017130;
  ++v2017130;
  *(_DWORD *)((4 * v1 & 0x3FF) + 0x2017110) = a1;
  return v3;
}
