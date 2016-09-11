int sub_8028668()
{
  int v0; // r3@1
  signed int v1; // r7@4
  unsigned int v2; // r0@8
  signed int v3; // r6@9
  int v5; // [sp+20h] [bp-4h]@0

  v0 = *(_WORD *)(2 * v2024C08 + 0x2024C34);
  if ( !*(_WORD *)(2 * v2024C08 + 0x2024C34) || v0 == 0xFFFF || *(_DWORD *)(4 * v2024C08 + 0x2024C98) & 0x400C0 )
    goto LABEL_20;
  v1 = 0;
  if ( v0 != *(_WORD *)(88 * v2024C08 + 0x2024A8C) )
  {
    do
      ++v1;
    while ( v1 <= 3 && *(_WORD *)(2 * v2024C08 + 0x2024C34) != *(_WORD *)(2 * v1 + 88 * v2024C08 + 0x2024A8C) );
  }
  if ( v1 == 4 || (v2 = *(_BYTE *)(v1 + 88 * v2024C08 + 33704612), v2 <= 1) )
  {
LABEL_20:
    v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  }
  else
  {
    v3 = (Random(v2) & 3) + 2;
    if ( *(_BYTE *)(v1 + 88 * v2024C08 + 33704612) < v3 )
      v3 = *(_BYTE *)(v1 + 88 * v2024C08 + 33704612);
    byte_30041C0[0] = -3;
    byte_30041C1 = 2;
    word_30041C2 = *(_WORD *)(2 * v2024C08 + 0x2024C34);
    byte_30041C4 = -1;
    ConvertIntToDecimalStringN(byte_3004290, v3, 0, 1);
    byte_3004290[0] = -3;
    byte_3004291 = 1;
    word_3004292 = 257;
    byte_3004294 = v3;
    byte_3004295 = -1;
    *(_BYTE *)(v1 + 88 * v2024C08 + 33704612) -= v3;
    v2024A60 = v2024C08;
    if ( !(((unsigned int)*(_BYTE *)(28 * v2024C08 + 0x2024CC0) >> 4) & gBitTable[v1])
      && !(*(_DWORD *)(88 * v2024A60 + 0x2024AD0) & 0x200000) )
    {
      dp01_build_cmdbuf_x02_a_b_varargs(0, v1 + 9, 0, 1u, (char *)(88 * v2024A60 + 33704612 + v1));
      dp01_battle_side_mark_buffer_for_execution(v2024A60);
    }
    v2024C10 += 5;
    if ( !*(_BYTE *)(v1 + 88 * v2024C08 + 33704612) )
      b_cancel_multi_turn_move_maybe(v2024C08);
  }
  return v5;
}
