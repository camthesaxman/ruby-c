int atkE2_cmde2()
{
  int v0; // r6@1
  int v2; // [sp+10h] [bp-4h]@0

  v0 = v2024A64;
  if ( !v2024A64 )
  {
    v2024A60 = sub_8015150(*(_BYTE *)(v2024C10 + 1));
    *(_DWORD *)(88 * v2024A60 + 0x2024ACC) = v0;
    dp01_build_cmdbuf_x02_a_b_varargs(0, 40, 0, 4u, (char *)(88 * v2024A60 + 33704652));
    dp01_battle_side_mark_buffer_for_execution(v2024A60);
    sub_8010F48();
    v2024C10 += 2;
  }
  return v2;
}
