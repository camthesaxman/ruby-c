int sub_811F664()
{
  char *v0; // r5@1
  unsigned int i; // r3@1
  int v3; // [sp+10h] [bp-4h]@0

  v0 = (char *)&dword_3004360[25 * *(_WORD *)(2 * v2024A60 + 0x2024A6A)] + *(_BYTE *)((v2024A60 << 9) + 0x2023A61);
  for ( i = 0; i < *(_BYTE *)((v2024A60 << 9) + 0x2023A62); i = (i + 1) & 0xFF )
    v0[i] = *(_BYTE *)(i + (v2024A60 << 9) + 3 + 33700448);
  dp01_tbl3_exec_completed();
  return v3;
}
