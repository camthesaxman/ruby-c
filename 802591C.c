int atk81_setrest()
{
  int v0; // r6@1
  int v2; // [sp+14h] [bp-4h]@0

  v0 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  v2024C08 = v2024C07;
  v2024A60 = v2024C07;
  v2024BEC = -*(_WORD *)(88 * v2024C07 + 0x2024AAC);
  if ( *(_WORD *)(88 * v2024C07 + 0x2024AA8) == *(_WORD *)(88 * v2024C07 + 0x2024AAC) )
  {
    v2024C10 = v0;
  }
  else
  {
    v2024D23 = (*(_DWORD *)(88 * v2024C07 + 0x2024ACC) & 0xF8) != 0;
    *(_DWORD *)(88 * v2024C08 + 0x2024ACC) = 3;
    dp01_build_cmdbuf_x02_a_b_varargs(0, 40, 0, 4u, (char *)(88 * v2024A60 + 33704652));
    dp01_battle_side_mark_buffer_for_execution(v2024A60);
    v2024C10 += 5;
  }
  return v2;
}
