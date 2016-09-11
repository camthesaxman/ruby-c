int sub_802E2D4()
{
  int v0; // r4@3
  _BYTE *v1; // r0@3
  int v3; // [sp+10h] [bp-4h]@0

  if ( *(_BYTE *)((v2024A60 << 9) + 0x2023A62) == 1 )
  {
    FillWindowRect((int)&unk_3004210, 4118, 0x17u, 0x37u, 0x1Cu, 0x3Au);
    InitWindow((int)&unk_3004210, (int)&gUnknown_08400D52, 656, 19, 55);
  }
  else
  {
    v0 = (v2024A60 << 9) + 33700452;
    v1 = StringCopy((_BYTE *)0x20238CC, &gUnknown_08400D49);
    StringCopy(v1, &gTypeNames[7 * gBattleMoves[12 * *(_WORD *)(v0 + 2 * *(_BYTE *)(v2024A60 + 0x2024E64)) + 2]]);
    FillWindowRect((int)&unk_3004210, 4118, 0x17u, 0x39u, 0x1Cu, 0x3Au);
    InitWindow((int)&unk_3004210, 33700044, 704, 23, 57);
  }
  sub_8002F44((int)&unk_3004210);
  return v3;
}
