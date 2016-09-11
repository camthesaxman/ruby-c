int sub_80138F0()
{
  int v1; // [sp+Ch] [bp-4h]@0

  if ( v2024D26 )
    v2024A7F = 12;
  v2016057 = v2024A7E;
  call_via_r0(*(&gUnknown_081FA640 + v2024A7F));
  if ( v2024A7E < (unsigned int)v2024A68 )
  {
    if ( v2016057 != v2024A7E )
      v2024C6C &= 0xFFF7FDFF;
  }
  else
  {
    v2024C6C &= 0xFFEFFFFF;
    dword_30042D4 = (int)*(&gUnknown_081FA678 + (v2024D26 & 0x7F));
  }
  return v1;
}
