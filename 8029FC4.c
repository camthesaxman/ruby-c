int atkCD_cureifburnedparalysedorpoisoned()
{
  int v1; // [sp+10h] [bp-4h]@0

  if ( *(_DWORD *)(88 * v2024C07 + 0x2024ACC) & 0xD8 )
  {
    *(_DWORD *)(88 * v2024C07 + 0x2024ACC) = 0;
    v2024C10 += 5;
    v2024A60 = v2024C07;
    dp01_build_cmdbuf_x02_a_b_varargs(0, 40, 0, 4u, (char *)(88 * v2024C07 + 33704652));
    dp01_battle_side_mark_buffer_for_execution(v2024A60);
  }
  else
  {
    v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  }
  return v1;
}
