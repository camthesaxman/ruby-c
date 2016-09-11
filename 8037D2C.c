int sub_8037D2C()
{
  int v0; // r0@2
  int v2; // [sp+0h] [bp-4h]@0

  if ( !(*(_BYTE *)(12 * v2024A60 + 0x2017810) & 0x40) )
  {
    v0 = CreateTask(c3_0802FDF4, 10);
    dp01_tbl4_exec_completed(v0);
  }
  return v2;
}
