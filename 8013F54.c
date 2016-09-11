int sub_8013F54()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( ((v2024A7F - 11) & 0xFFu) > 1 )
  {
    if ( !v2024A64 )
      call_via_r0(*(&gUnknown_081FA73C + *v2024C10));
  }
  else
  {
    if ( v2017160 )
      --v2017160;
    dword_30042D4 = *(_DWORD *)(4 * v2017160 + 0x2017140);
  }
  return v1;
}
