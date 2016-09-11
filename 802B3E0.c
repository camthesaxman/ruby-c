int sub_802B3E0()
{
  int v0; // r0@1
  int v2; // [sp+8h] [bp-4h]@0

  v0 = battle_get_per_side_status(v2024C07);
  v2024A60 = battle_get_side_with_given_state((v0 ^ 2) & 0xFF);
  if ( !(v20239F8 & 1)
    || v2024C0C & gBitTable[v2024A60]
    || *(_BYTE *)(v2024A60 + 0x2024C18)
    || *(_WORD *)(2 * v2024A60 + 0x2024C60) != 228 )
  {
    v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  }
  else
  {
    *(_BYTE *)(v2024A60 + 0x2024A76) = 11;
    v2024BE6 = 228;
    v2024C10 += 5;
    v2016002 = 1;
    v20160A7 = v2024C07;
    v2024C07 = v2024A60;
  }
  return v2;
}
