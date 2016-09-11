int dp01t_30_7_0803D67C()
{
  int v0; // r2@5
  unsigned int v1; // r0@5
  int v2; // r2@8
  int v3; // r3@8
  int v5; // [sp+Ch] [bp-4h]@0

  if ( !*(_BYTE *)((v2024A60 << 9) + 0x2023A61) || battle_side_get_owner(v2024A60) << 24 )
  {
    *(_BYTE *)(12 * v2024A60 + 0x2017810) |= 1u;
    if ( *(_BYTE *)((v2024A60 << 9) + 0x2023A62) )
    {
      v0 = *(_BYTE *)(12 * v2024A60 + 0x2017811);
      v1 = (unsigned int)(v0 << 26) >> 27;
      if ( v1 <= 1 )
      {
        *(_BYTE *)(12 * v2024A60 + 0x2017811) = v0 & 0xC1 | 2 * ((v1 + 1) & 0x1F);
        return v5;
      }
      *(_BYTE *)(12 * v2024A60 + 0x2017811) = v0 & 0xC1;
    }
    v2 = *(_BYTE *)((v2024A60 << 9) + 0x2023A61);
    v3 = *(_BYTE *)((v2024A60 << 9) + 0x2023A62);
    *(_BYTE *)(v2024A60 + 0x2024E68) = sub_8044804();
    *(_BYTE *)(12 * v2024A60 + 0x2017815) = 0;
    if ( *(_BYTE *)((v2024A60 << 9) + 0x2023A62) )
      *(_BYTE *)(12 * v2024A60 + 0x2017815) = 93;
    dword_3004330[v2024A60] = (int)sub_8035E2C;
  }
  else
  {
    sub_80334EC();
  }
  return v5;
}
