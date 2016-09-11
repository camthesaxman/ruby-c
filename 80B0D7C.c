int sub_80B0D7C()
{
  signed int v0; // r5@1
  unsigned int v1; // r4@2
  unsigned int v2; // r4@4
  int v3; // r2@5
  int v4; // r0@5
  unsigned int v5; // r4@8
  int v6; // r2@9
  int v7; // r0@9
  char v9; // [sp+8h] [bp-24h]@6
  int v10; // [sp+28h] [bp-4h]@13

  v0 = 0;
  if ( v2018000 )
  {
    v1 = 0;
    do
    {
      FillWindowRect_DefaultPalette(
        (int)&unk_3004210,
        0,
        gUnknown_083CA308[2 * v1],
        byte_83CA309[2 * v1],
        gUnknown_083CA310[2 * v1] + 5,
        byte_83CA311[2 * v1] + 1);
      v1 = (v1 + 1) & 0xFF;
    }
    while ( v1 <= 3 );
    v2 = 0;
    do
    {
      LOWORD(v3) = *(_WORD *)(28 * v2 + 0x2019264);
      v4 = *(_WORD *)(28 * v2 + 0x2019264);
      if ( v4 < 0 )
      {
        v3 = 0xFFFF * v4 & 0xFFFF;
        v9 = -82;
        v0 = 1;
      }
      ConvertIntToDecimalStringN(&v9 + v0, (signed __int16)v3, 0, 4);
      sub_8003460(
        (int)&unk_3004210,
        (int)&v9,
        22 * *(_BYTE *)(v2 + 33785494) + 592,
        gUnknown_083CA310[2 * *(_BYTE *)(v2 + 33785494)],
        byte_83CA311[2 * *(_BYTE *)(v2 + 33785494)]);
      v0 = 0;
      v2 = (v2 + 1) & 0xFF;
    }
    while ( v2 <= 3 );
    v5 = 0;
    do
    {
      LOWORD(v6) = *(_WORD *)(28 * v5 + 0x2019262);
      v7 = *(_WORD *)(28 * v5 + 0x2019262);
      if ( v7 < 0 )
      {
        v6 = 0xFFFF * v7 & 0xFFFF;
        v9 = -82;
        v0 = 1;
      }
      ConvertIntToDecimalStringN(&v9 + v0, (signed __int16)v6, 0, 4);
      sub_8003460(
        (int)&unk_3004210,
        (int)&v9,
        (1310720 * (unsigned int)*(_BYTE *)(v5 + 33785494) + 0x2000000) >> 16,
        gUnknown_083CA308[2 * *(_BYTE *)(v5 + 33785494)],
        byte_83CA309[2 * *(_BYTE *)(v5 + 33785494)]);
      v0 = 0;
      v5 = (v5 + 1) & 0xFF;
    }
    while ( v5 <= 3 );
    sub_80AEB30();
  }
  return v10;
}
