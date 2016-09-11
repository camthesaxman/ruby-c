int b_movescr_stack_pop_cursor()
{
  int v0; // r0@1
  int result; // r0@1

  v0 = v2017130 - 1;
  --v2017130;
  result = *(_DWORD *)((4 * v0 & 0x3FF) + 0x2017110);
  v2024C10 = result;
  return result;
}
