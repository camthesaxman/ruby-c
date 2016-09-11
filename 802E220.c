int sub_802E220()
{
  int v0; // r4@2
  _BYTE *v1; // r0@2
  int v2; // r2@2
  char *v3; // r0@2
  int v5; // [sp+10h] [bp-4h]@0

  if ( *(_BYTE *)((v2024A60 << 9) + 0x2023A62) != 1 )
  {
    v0 = (v2024A60 << 9) + 33700452;
    v1 = StringCopy((_BYTE *)0x20238CC, &gUnknown_08400D49);
    *v1 = -4;
    v1[1] = 17;
    v1[2] = 2;
    v2 = (int)(v1 + 3);
    *(_BYTE *)v2 = -4;
    *(_BYTE *)(v2 + 1) = 20;
    *(_BYTE *)(v2 + 2) = 6;
    v3 = ConvertIntToDecimalStringN(v1 + 6, *(_BYTE *)(v0 + 8 + *(_BYTE *)(v2024A60 + 0x2024E64)), 1, 2);
    *v3 = -70;
    ConvertIntToDecimalStringN(v3 + 1, *(_BYTE *)(v0 + 12 + *(_BYTE *)(v2024A60 + 0x2024E64)), 1, 2);
    InitWindow((int)&unk_3004210, 33700044, 674, 25, 55);
    sub_8002F44((int)&unk_3004210);
  }
  return v5;
}
