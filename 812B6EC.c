int bx_wait_t6()
{
  int v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = v2024E6D;
  if ( !v2024E6D || (v0 = *(_BYTE *)(12 * v2024A60 + 0x2017810) & 0x40) == 0 )
    dp01_tbl6_exec_completed(v0);
  return v2;
}
