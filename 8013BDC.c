int sub_8013BDC()
{
  unsigned int v0; // r0@1
  void *v1; // r0@3
  int v3; // [sp+0h] [bp-4h]@0

  v2024A7F = 0;
  v0 = (unsigned int)*(_BYTE *)(16 * v2024C07 + 0x2024D29) << 27 >> 30;
  if ( v0 == 1 )
  {
    v1 = &gUnknown_081D8E14;
  }
  else if ( v0 == 2 )
  {
    v1 = &gUnknown_081D8E22;
  }
  else
  {
    v1 = &gUnknown_081D8E29;
  }
  v2024C10 = v1;
  dword_30042D4 = (int)sub_8013C9C;
  return v3;
}
