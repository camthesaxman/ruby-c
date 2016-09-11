int atk5E_8025A70()
{
  int v0; // r12@6
  signed int v1; // r2@6
  _WORD *v2; // r3@6
  int v4; // [sp+14h] [bp-4h]@0

  v2024A60 = sub_8015150(*(_BYTE *)(v2024C10 + 1));
  if ( v2024D1E )
  {
    if ( v2024D1E == 1 && !v2024A64 )
    {
      v0 = (v2024A60 << 9) + 33702500;
      v1 = 0;
      v2 = (_WORD *)((v2024A60 << 9) + 33702512);
      do
      {
        *(_WORD *)(2 * v1 + 88 * v2024A60 + 0x2024A8C) = *v2;
        *(_BYTE *)(v1 + 88 * v2024A60 + 33704612) = *(_BYTE *)(v0 + 36 + v1);
        ++v2;
        ++v1;
      }
      while ( v1 <= 3 );
      v2024C10 += 2;
    }
  }
  else
  {
    dp01_build_cmdbuf_x00_a_b_0(0, 0, 0);
    dp01_battle_side_mark_buffer_for_execution(v2024A60);
    ++v2024D1E;
  }
  return v4;
}
