int sub_8037644()
{
  unsigned __int8 v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = *(_BYTE *)(12 * v2024A60 + 0x2017819) - 1;
  *(_BYTE *)(12 * v2024A60 + 0x2017819) = v0;
  if ( v0 == 255 )
  {
    *(_BYTE *)(12 * v2024A60 + 0x2017819) = 0;
    dp01_tbl4_exec_completed(0);
  }
  return v2;
}
