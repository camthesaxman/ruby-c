int atk13_printfromtable()
{
  int v1; // [sp+8h] [bp-4h]@0

  if ( !v2024A64 )
  {
    b_std_message(
      *(_WORD *)((*(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24))
               + 2 * v2024D23),
      v2024C07);
    v2024C10 += 5;
    v2024D25 = 1;
  }
  return v1;
}
