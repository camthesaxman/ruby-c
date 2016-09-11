int sub_80310A4()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( *(_BYTE *)(12 * v2024A60 + 0x2017810) & 1 )
    dword_3004B20[10 * *(_BYTE *)(v2024A60 + 0x2024E68)] = (int)sub_8044CA0;
  dp01_tbl1_exec_completed();
  return v1;
}
