int sub_802ADD8()
{
  int v1; // [sp+14h] [bp-4h]@0

  v2024A60 = sub_8015150(*(_BYTE *)(v2024C10 + 1));
  if ( *(_BYTE *)(88 * v2024A60 + 0x2024AA0) == 30 )
  {
    *(_DWORD *)(88 * v2024A60 + 0x2024ACC) = 0;
    dp01_build_cmdbuf_x02_a_b_varargs(
      0,
      40,
      gBitTable[*(_BYTE *)(v2024A60 + 0x2016064)],
      4u,
      (char *)(88 * v2024A60 + 33704652));
    dp01_battle_side_mark_buffer_for_execution(v2024A60);
  }
  v2024C10 += 2;
  return v1;
}
