int __fastcall b_std_message(__int16 a1, char a2)
{
  int v3; // [sp+4h] [bp-4h]@0

  v2024A60 = a2;
  dp01_build_cmdbuf_x10_TODO(0, a1);
  dp01_battle_side_mark_buffer_for_execution(v2024A60);
  return v3;
}
