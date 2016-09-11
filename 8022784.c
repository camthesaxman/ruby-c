int sub_8022784()
{
  unsigned __int16 v0; // r0@4
  int v2; // [sp+8h] [bp-4h]@0

  if ( !v2024A64 )
  {
    v2024A60 = sub_8015150(*(_BYTE *)(v2024C10 + 1));
    if ( (unsigned __int8)battle_side_get_owner(v2024A60) == 1 && !(v20239F8 & 0x902) )
    {
      v0 = SpeciesToNationalPokedexNum(*(_WORD *)(88 * v2024A60 + 0x2024A80));
      sub_8090D90(v0, 2);
    }
    v2024C0C &= ~LOBYTE(gBitTable[v2024A60]);
    sub_800C704(0, *(_BYTE *)(2 * v2024A60 + 0x2024A6A), *(_BYTE *)(v2024C10 + 2));
    dp01_battle_side_mark_buffer_for_execution(v2024A60);
    v2024C10 += 3;
  }
  return v2;
}
