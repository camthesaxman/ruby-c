int atkE6_castform_transform()
{
  int v1; // [sp+4h] [bp-4h]@0

  v2024A60 = v2016003;
  if ( *(_DWORD *)(88 * v2016003 + 0x2024AD0) & 0x1000000 )
    v201609B |= 0x80u;
  dp01_build_cmdbuf_x34_a_bb_aka_battle_anim(0, 0, v201609B);
  dp01_battle_side_mark_buffer_for_execution(v2024A60);
  ++v2024C10;
  return v1;
}
