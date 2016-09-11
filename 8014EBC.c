int sub_8014EBC()
{
  int v1; // [sp+8h] [bp-4h]@0

  v2024C07 = *(_BYTE *)(v2024A7E + 0x2024A7A);
  word_30042A4 = 0;
  word_30042A0 = 0;
  v2016089 += gUnknown_081FA71B[v2016086];
  if ( v2016089 > 0x14u )
    v2016089 = 20;
  v2016088 += gUnknown_081FA71F[v2016086];
  if ( v2016088 > 0x14u )
    v2016088 = 20;
  if ( v2016086 > 2u )
  {
    v2024D23 = 1;
  }
  else
  {
    ++v2016086;
    v2024D23 = 0;
  }
  v2024C10 = dword_81D9E9C;
  v2024A7F = 10;
  return v1;
}
