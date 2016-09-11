int sub_813823C()
{
  unsigned int v0; // r4@3
  unsigned int v1; // r5@3
  int v3; // [sp+8h] [bp-4h]@0

  if ( *(_BYTE *)((v2024A60 << 9) + 0x2023A62) )
  {
    v0 = *(_BYTE *)((v2024A60 << 9) + 0x2023A62);
    v1 = 0;
    do
    {
      if ( v0 & 1 )
        sub_8138294(v1);
      v0 >>= 1;
      v1 = (v1 + 1) & 0xFF;
    }
    while ( v1 <= 5 );
  }
  else
  {
    sub_8138294(*(_BYTE *)(2 * v2024A60 + 0x2024A6A));
  }
  dp01_tbl5_exec_completed();
  return v3;
}
