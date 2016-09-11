int atk54_802511C()
{
  int v1; // [sp+8h] [bp-4h]@0

  v2024A60 = v2024C07;
  dp01_build_cmdbuf_x2B_aa_0(0, *(_BYTE *)(v2024C10 + 1) | (unsigned __int16)(*(_BYTE *)(v2024C10 + 2) << 8));
  dp01_battle_side_mark_buffer_for_execution(v2024A60);
  v2024C10 += 3;
  return v1;
}
