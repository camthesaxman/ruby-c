int sub_811DA94()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( v2024A64 & gBitTable[v2024A60] )
  {
    if ( (unsigned int)*(_BYTE *)((v2024A60 << 9) + 0x2023A60) > 0x38 )
      dp01_tbl3_exec_completed();
    else
      call_via_r0(*(&gUnknown_083FE4F4 + *(_BYTE *)((v2024A60 << 9) + 0x2023A60)));
  }
  return v1;
}
