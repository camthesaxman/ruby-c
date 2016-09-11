int __fastcall b_push_move_exec(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  b_movescr_stack_push_cursor();
  v2024C10 = v1;
  v2 = v2017160;
  ++v2017160;
  *(_DWORD *)((4 * v2 & 0x3FF) + 0x2017140) = dword_30042D4;
  dword_30042D4 = (int)sub_8013FBC;
  return v4;
}
