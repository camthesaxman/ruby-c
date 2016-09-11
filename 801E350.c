int atk14_printfromtable2()
{
  int v0; // r1@2
  int v2; // [sp+Ch] [bp-4h]@0

  if ( !v2024A64 )
  {
    v0 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
    v2024A60 = v2024C07;
    dp01_build_cmdbuf_x11_TODO(0, *(_WORD *)(v0 + 2 * v2024D23));
    dp01_battle_side_mark_buffer_for_execution(v2024A60);
    v2024C10 += 5;
    v2024D25 = 1;
  }
  return v2;
}
