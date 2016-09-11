int atk41_call()
{
  int v1; // [sp+4h] [bp-4h]@0

  b_movescr_stack_push(v2024C10 + 5);
  v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  return v1;
}
