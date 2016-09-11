int dp01t_30_3_80EB11C()
{
  char v0; // r0@4
  int v2; // [sp+Ch] [bp-4h]@0

  if ( !*(_BYTE *)((v2024A60 << 9) + 0x2023A61) || battle_side_get_owner(v2024A60) << 24 )
  {
    *(_BYTE *)(12 * v2024A60 + 0x2017810) |= 1u;
    v0 = sub_8044804(
           v2024A60,
           (v2024A60 << 9) + 33700452,
           *(_BYTE *)((v2024A60 << 9) + 0x2023A61),
           *(_BYTE *)((v2024A60 << 9) + 0x2023A62));
    *(_BYTE *)(v2024A60 + 0x2024E68) = v0;
    *(_BYTE *)(12 * v2024A60 + 0x2017815) = 0;
    if ( *(_BYTE *)((v2024A60 << 9) + 0x2023A62) )
      *(_BYTE *)(12 * v2024A60 + 0x2017815) = 93;
    dword_3004330[v2024A60] = (int)sub_81208E0;
  }
  else
  {
    dp01_tbl3_exec_completed();
  }
  return v2;
}
