int bc_8012FAC()
{
  int v1; // [sp+8h] [bp-4h]@0

  if ( v2024D1E )
  {
    if ( v2024D1E == 1 && !v2024A64 )
    {
      ++v2024D1F;
      if ( v2024D1F == v2024A68 )
        dword_30042D4 = (int)bc_load_battlefield;
      else
        v2024D1E = v2024A64;
    }
  }
  else
  {
    v2024A60 = v2024D1F;
    dp01_build_cmdbuf_x00_a_b_0(0, 0, 0);
    dp01_battle_side_mark_buffer_for_execution(v2024A60);
    ++v2024D1E;
  }
  return v1;
}
