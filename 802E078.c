int bx_wait_t1()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( !v2024E6D || !(*(_BYTE *)(12 * v2024A60 + 0x2017810) & 0x40) )
    dp01_tbl1_exec_completed();
  return v1;
}
