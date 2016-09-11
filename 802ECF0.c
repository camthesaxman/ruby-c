int sub_802ECF0()
{
  int v0; // r2@1
  char *v1; // r6@1
  char *v2; // r4@1
  unsigned int i; // r2@1
  int v5; // [sp+0h] [bp-6Ch]@1
  int v6; // [sp+68h] [bp-4h]@3

  v0 = *(_BYTE *)((v2024A60 << 9) + 0x2023A61);
  v1 = (char *)&unk_3004360 + 100 * *(_WORD *)(2 * v2024A60 + 0x2024A6A) + v0;
  v2 = (char *)&v5 + v0;
  for ( i = 0; i < *(_BYTE *)((v2024A60 << 9) + 0x2023A62); i = (i + 1) & 0xFF )
    v2[i] = v1[i];
  dp01_build_cmdbuf_x1D_1D_numargs_varargs(1u, *(_BYTE *)((v2024A60 << 9) + 0x2023A62), v2);
  dp01_tbl1_exec_completed();
  return v6;
}
