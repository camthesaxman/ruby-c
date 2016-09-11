int sub_803A030()
{
  int v1; // [sp+0h] [bp-4h]@0

  v20238C8 = v20238C8 & 0x7F | (((unsigned __int8)(v20238C8 << 24 >> 31) ^ 1) << 7);
  dp01_tbl4_exec_completed();
  return v1;
}
