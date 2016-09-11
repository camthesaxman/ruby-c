int sub_8139AA0()
{
  char v0; // r0@4
  int v2; // [sp+8h] [bp-4h]@0

  if ( !*(_BYTE *)((v2024A60 << 9) + 0x2023A61) || battle_side_get_owner(v2024A60) << 24 )
  {
    *(_BYTE *)(12 * v2024A60 + 0x2017810) |= 1u;
    v0 = sub_8044804(
           v2024A60,
           (v2024A60 << 9) + 33700452,
           *(_BYTE *)((v2024A60 << 9) + 0x2023A61),
           *(_BYTE *)((v2024A60 << 9) + 0x2023A62));
    *(_BYTE *)(v2024A60 + 0x2024E68) = v0;
    dp01_tbl5_exec_completed();
  }
  else
  {
    dp01_tbl5_exec_completed();
  }
  return v2;
}
