int sub_8030FAC()
{
  int v0; // r2@4
  int v1; // r3@4
  int v3; // [sp+Ch] [bp-4h]@0

  if ( !*(_BYTE *)((v2024A60 << 9) + 0x2023A61) || battle_side_get_owner(v2024A60) << 24 )
  {
    *(_BYTE *)(12 * v2024A60 + 0x2017810) |= 1u;
    v0 = *(_BYTE *)((v2024A60 << 9) + 0x2023A61);
    v1 = *(_BYTE *)((v2024A60 << 9) + 0x2023A62);
    *(_BYTE *)(v2024A60 + 0x2024E68) = sub_8044804();
    *(_BYTE *)(12 * v2024A60 + 0x2017815) = 0;
    if ( *(_BYTE *)((v2024A60 << 9) + 0x2023A62) )
      *(_BYTE *)(12 * v2024A60 + 0x2017815) = 93;
    dword_3004330[v2024A60] = (int)sub_8031064;
  }
  else
  {
    dp01_tbl1_exec_completed();
  }
  return v3;
}
