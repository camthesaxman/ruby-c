_DWORD *b_movescr_stack_push_cursor()
{
  int v0; // r0@1
  _DWORD *result; // r0@1

  v0 = v2017130;
  ++v2017130;
  result = (_DWORD *)((4 * v0 & 0x3FF) + 33648912);
  *result = v2024C10;
  return result;
}
