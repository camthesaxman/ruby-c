int sub_802B9E0()
{
  unsigned __int16 v0; // r0@1
  unsigned __int16 v1; // r0@3
  int v3; // [sp+Ch] [bp-4h]@0

  v0 = SpeciesToNationalPokedexNum(*(_WORD *)(88 * v2024C08 + 0x2024A80));
  if ( sub_8090D90(v0, 1) << 24 )
  {
    v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  }
  else
  {
    v1 = SpeciesToNationalPokedexNum(*(_WORD *)(88 * v2024C08 + 0x2024A80));
    sub_8090D90(v1, 3);
    if ( *(_WORD *)(88 * v2024C08 + 0x2024A80) == 201 )
      v2024EC0 = *(_DWORD *)(88 * v2024C08 + 0x2024AC8);
    if ( *(_WORD *)(88 * v2024C08 + 0x2024A80) == 308 )
      v2024EC4 = *(_DWORD *)(88 * v2024C08 + 0x2024AC8);
    v2024C10 += 5;
  }
  return v3;
}
