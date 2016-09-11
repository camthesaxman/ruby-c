int atkE3_jumpiffainted()
{
  int v1; // [sp+4h] [bp-4h]@0

  v2024A60 = sub_8015150(*(_BYTE *)(v2024C10 + 1));
  if ( *(_WORD *)(88 * v2024A60 + 0x2024AA8) )
    v2024C10 += 6;
  else
    v2024C10 = *(_BYTE *)(v2024C10 + 2) | (*(_BYTE *)(v2024C10 + 3) << 8) | (*(_BYTE *)(v2024C10 + 4) << 16) | (*(_BYTE *)(v2024C10 + 5) << 24);
  return v1;
}
