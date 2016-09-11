int atk4B_cmd4b()
{
  int v1; // [sp+4h] [bp-4h]@0

  v2024A60 = v2024C07;
  if ( !(v2024C6C & (gBitTable[v2024C07] << 28)) )
  {
    dp01_build_cmdbuf_x06_a(0, 0);
    dp01_battle_side_mark_buffer_for_execution(v2024A60);
  }
  ++v2024C10;
  return v1;
}
