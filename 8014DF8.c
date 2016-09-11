int sub_8014DF8()
{
  unsigned int v0; // r0@4
  char v1; // r0@5
  int v3; // [sp+Ch] [bp-4h]@0

  v2024C07 = *(_BYTE *)(v2024A7E + 0x2024A7A);
  word_30042A4 = 0;
  word_30042A0 = 0;
  v2024D23 = *(_BYTE *)((v2024C07 << 9) + 0x2024261) - 1;
  v2024C04 = *(_BYTE *)((v2024C07 << 9) + 0x2024262);
  if ( v2016087 <= 2u )
    ++v2016087;
  if ( v2016088 > 1u )
  {
    v0 = *(&gUnknown_081FA70C[3 * v2016087] + v2024D23);
    if ( v2016088 >= v0 )
      v1 = v2016088 - v0;
    else
      v1 = 1;
    v2016088 = v1;
  }
  v2024C10 = dword_81D9EA0;
  v2024A7F = 10;
  return v3;
}
