int dp01t_00_4_getattr()
{
  int v0; // r6@1
  unsigned int v1; // r4@3
  signed int v2; // r5@3
  int v4; // [sp+0h] [bp-110h]@2
  int v5; // [sp+10Ch] [bp-4h]@7

  v0 = 0;
  if ( *(_BYTE *)((v2024A60 << 9) + 0x2023A62) )
  {
    v1 = *(_BYTE *)((v2024A60 << 9) + 0x2023A62);
    v2 = 0;
    do
    {
      if ( v1 & 1 )
        v0 += dp01_getattr_by_ch1_for_player_pokemon__((unsigned __int8)v2, (char *)&v4 + v0);
      v1 >>= 1;
      ++v2;
    }
    while ( v2 <= 5 );
  }
  else
  {
    LOWORD(v0) = dp01_getattr_by_ch1_for_player_pokemon__(*(_BYTE *)(2 * v2024A60 + 0x2024A6A), &v4);
  }
  dp01_build_cmdbuf_x1D_1D_numargs_varargs(1u, v0, &v4);
  dp01_tbl4_exec_completed();
  return v5;
}
