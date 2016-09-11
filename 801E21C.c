int atk10_printstring()
{
  int v1; // [sp+4h] [bp-4h]@0

  if ( !v2024A64 )
  {
    b_std_message(*(_BYTE *)(v2024C10 + 1) | (unsigned __int16)(*(_BYTE *)(v2024C10 + 2) << 8), v2024C07);
    v2024C10 += 3;
    v2024D25 = 1;
  }
  return v1;
}
