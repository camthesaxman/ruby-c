int sub_803002C()
{
  int v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = *(_BYTE *)((v2024A60 << 9) + 0x2023A61);
  if ( *(_BYTE *)((v2024A60 << 9) + 0x2023A61) )
  {
    do
      v0 = (v0 - 1) & 0xFF;
    while ( v0 );
  }
  dp01_tbl1_exec_completed();
  return v2;
}
